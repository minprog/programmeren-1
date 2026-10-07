# Qsort

> Maak deze opdracht in de [Terra IDE](https://ide.proglab.nl/).

De standaardbibliotheek van C bevat een functie [`qsort`](https://manual.cs50.io/3/qsort) die **elke array** kan sorteren: getallen, strings, structs, wat je maar wilt. In `sort` heb je zelf een sorteeralgoritme geschreven, maar dat werkte alleen voor `int`s, en in één vaste volgorde. Hoe kan één functie dan elk type en elke volgorde ondersteunen?

Met precies de twee dingen uit de voorgaande opdrachten: een **function pointer** (die bepaalt wat "kleiner" betekent) en **void pointers** (waarmee de functie niets over de gesorteerde elementen hoeft te weten). In deze opdracht bouw je `qsort` zelf na.

## Download

[Get the program template](https://github.com/minprog/programmeren-1/raw/refs/heads/2026/problems/functional/qsort/dist/qsort.zip)

## Het programma

`sorter.c` is een compleet programma dat een dataset inleest en sorteert met **jouw** `qsort_`. Je hoeft er niets aan te veranderen, maar lees het wel. Let vooral op hoe `qsort_` drie keer met een heel ander type wordt aangeroepen:

* `numbers`: een array van `int`
* `words`: een array van `char *` (pointers naar strings)
* `countries`: een array van `country`-structs

Het programma wordt zo gebruikt:

    $ make
    $ ./sorter numbers
    $ ./sorter numbers desc
    $ ./sorter words
    $ ./sorter words length
    $ ./sorter countries population
    $ ./sorter countries density
    $ ./sorter bench 1000000

> Dit programma heeft command-line argumenten en meerdere bestanden, dus je compileert en draait het met `make` en `./sorter ...` **in de terminal**, niet met de run-knop van Terra. Doe dat vanuit de map `qsort`, anders vindt het programma de bestanden in `data/` niet.

Na het sorteren print het programma de gesorteerde data en controleert het daarna zelf of dat klopt. Je ziet dan onderaan `Sorted correctly!` of `NOT sorted correctly`. Die controle gebruikt **eigen** vergelijkingsfuncties, dus hij controleert tegelijk je `qsort_` én je functies uit `compare.c`. Zolang je niets hebt geïmplementeerd, zie je dat de data niet gesorteerd is.

## Specificatie

De signatuur van `qsort_` is identiek aan die van `qsort` uit de standaardbibliotheek:

    void qsort_(void *base, size_t nmemb, size_t size,
                int (*compare)(const void *, const void *));

* `base` wijst naar het eerste element van de array.
* `nmemb` is het aantal elementen.
* `size` is de grootte van één element in bytes.
* `compare` krijgt twee pointers naar elementen van de array. De functie geeft een negatief getal terug als het eerste element voor het tweede moet komen, een positief getal als het erna moet komen, en `0` als dat niet uitmaakt.

### Deel 1: `compare_int` en `compare_int_desc`

Begin met de twee kleinste vergelijkingsfuncties in `compare.c`. Daarmee kun je `qsort_` straks meteen testen met `./sorter numbers`. De overige vijf functies maak je in deel 4.

Elke vergelijkingsfunctie krijgt twee `const void *`, die je eerst naar het juiste type moet casten. Bij `numbers` wijzen `a` en `b` naar `int`s, dus naar `const int *` casten en dan dereferencen.

Voor `compare_int` ligt de volgende oplossing voor de hand, maar werkt niet altijd: `return x - y;`. Kun je bedenken wat er misgaat voor waarden als `INT_MAX` en `-1`? Gebruik in plaats daarvan echte vergelijkingen. `compare_int_desc` is dan een kleine variatie op `compare_int`.

### Deel 2: `swap`

Je sorteeralgoritme heeft een manier nodig om twee elementen te verwisselen, terwijl je niet weet hoe groot ze zijn of wat erin zit. Implementeer in `qsort.c` de functie

    void swap(void *a, void *b, size_t size);

die `size` bytes op adres `a` verwisselt met `size` bytes op adres `b`. Dit kan zonder `malloc` en zonder dat je het type kent: je ruilt gewoon byte voor byte. Zie de opdracht `generic` voor hoe je met bytes werkt via een `char *`, en voor `memcpy`.

### Deel 3: `qsort_`

Implementeer nu `qsort_` in `qsort.c`. Implementeer **quicksort**, ofwel:

1. Kies een element als *pivot*.
2. Verdeel de array zo dat alle elementen die kleiner zijn dan de pivot vóór de pivot staan, en de rest erachter.
    1. Zet hiervoor eerst de pivot aan een eind.
    2. Verdeel de rest.
    3. Zet vervolgens de pivot op zijn plek.
3. Sorteer beide delen met dezelfde methode (recursie!).

Een paar aandachtspunten:

* Je hebt maar twee dingen nodig om elementen aan te wijzen: `base` (als `char *`) en `i * size`. Elk element `i` begint op `(char *) base + i * size`.
* Elementen vergelijk je **alleen** via `compare`. Je weet immers niet wat erin zit.
* Een array met 0 of 1 elementen is al gesorteerd.
* De invoer die de checks gebruiken bevat ook vrijwel gesorteerde arrays en arrays met veel dubbele waarden. Een slechte keuze van de pivot (bijvoorbeeld altijd het eerste element) is dan traag, en leidt bij grote arrays tot een te diepe recursie. Het middelste element is een betere keuze.
* Je mag **niet** de ingebouwde `qsort` gebruiken, of een andere functie uit de standaardbibliotheek die sorteert.
* Je mag `malloc` gebruiken, maar dat is niet nodig.

> Quicksort is niet *stabiel*: elementen die volgens `compare` gelijk zijn, kunnen in een andere volgorde terechtkomen. Dat is bij `qsort` ook zo, en daar hoef je niets aan te doen.

Test `qsort_` met `./sorter numbers` en `./sorter numbers desc`. Dankzij deel 1 kun je dat meteen doen.

### Deel 4: de overige vergelijkingsfuncties

Tot slot implementeer je in `compare.c` de overige vijf functies uit `compare.h`, voor strings en structs. Hierin maak je het verschil tussen types, en het moeilijkste onderdeel is dat je moet bepalen **waar de pointers naar wijzen**:

* Bij `countries` wijzen `a` en `b` naar `country`s: `const country *`.
* Bij `words` is de array een rij `char *`. Een element is dus zelf een pointer, en `a` en `b` wijzen naar die pointers. Het zijn dus eigenlijk `char **`! Dat geeft de volgende (vaak gemaakte) fout: je kunt `a` en `b` **niet** rechtstreeks aan `strcmp` geven. Eerst dereferencen: `*(char * const *) a`.

Voor `compare_country_density` geldt: vergelijk `population / area` als `double`, niet als `long`. Anders zijn landen met bijna gelijke bevolkingsdichtheid onterecht gelijk.

## Testen

Test elke combinatie van dataset en volgorde die hierboven staat. Je ziet steeds de gesorteerde data en de controle onderaan. Bekijk de uitvoer ook zelf: de controle vertelt je alleen *dat* iets fout is, en niet *wat*.

De uitvoer van `./sorter countries population` begint bijvoorbeeld met India en China, en eindigt met het Vaticaan:

    $ ./sorter countries population
    India                      1428600000    3287263    434.6
    China                      1425700000    9596961    148.6
    ...
    Vatican City                      800          1    800.0

    Sorted correctly! (49 elements)

Bij een melding als `NOT sorted correctly: element 5 is wrong` staan de eerste vijf elementen goed. Zoek dan uit of het probleem in `qsort_` zit (werkt het voor `numbers`, maar niet voor `words`?) of in een vergelijkingsfunctie (werkt `numbers asc` wel, maar `numbers desc` niet?). Schrijf eventueel zelf een kleine `main` om `swap` en `qsort_` met een array van 5 getallen te proberen, en gebruik `printf` om te zien wat er gebeurt.

### Benchmark

Met `./sorter bench <n>` sorteert het programma `n` willekeurige getallen met zowel jouw `qsort_` als de standaard `qsort`, controleert dat de resultaten overeenkomen en geeft de tijden. Probeer bijvoorbeeld `n` gelijk aan 1000, 100000 en 1000000.

    $ ./sorter bench 1000000
    qsort_: 0.266 s
    qsort:  0.109 s
    Results match.

Je hoeft niet sneller te zijn dan de standaardbibliotheek. Wel kun je jezelf afvragen waarom die zo veel sneller is. Zorg dat `n = 1000000` binnen enkele seconden klaar is.
