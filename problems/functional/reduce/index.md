# Reduce

`map` verandert elk element, `filter` selecteert elementen, en `reduce` **combineert alle elementen tot één waarde**: de som van een rij getallen, het grootste element, de langste string, ...

Tot nu toe werkten we met `int`. Maar `reduce` zou ook moeten werken voor `double`, voor strings, of voor structs. Hoe schrijf je één functie die met elk type werkt? Met een **void pointer**.

## Void pointers

Een `void *` is een pointer naar "iets", zonder dat C weet wat. Je kunt er alleen niet veel mee: je kunt hem niet dereferencen (`*p`) en je kunt er geen rekenwerk mee doen (`p + 1`), want C weet niet hoe groot het ding is waar hij naar wijst. Wel kun je elke pointer naar een `void *` omzetten en terug:

```c
int x = 42;
void *p = &x;            // kan zonder cast
int *q = (int *) p;      // terug, met cast
printf("%i\n", *q);      // 42
```

Dat is hoe functies als `memcpy` en `qsort` met alle types kunnen werken. De verantwoordelijkheid verschuift naar jou: **jij** moet weten wat er in de `void *` zit.

### Rekenen met bytes

Stel je hebt een array `items` van `n` elementen, elk `size` bytes groot, maar je hebt alleen een `void *`. Hoe kom je bij element `i`? Je telt in bytes. Een `char` is per definitie precies 1 byte groot, dus een `char *` is de manier om met losse bytes te rekenen:

```c
const void *item = (const char *) items + i * size;
```

Dit verschuift je `i * size` bytes op, vanaf het begin van de array. Neem even de tijd om te begrijpen waarom dit werkt.

## Opdracht

Schrijf in `reduce.c` de functie

```c
void reduce(const void *items, size_t n, size_t size,
            void *acc, void (*f)(void *acc, const void *item));
```

met de volgende parameters:

* `items`: pointer naar het begin van een array met `n` elementen.
* `n`: het aantal elementen.
* `size`: de grootte van één element in bytes.
* `acc`: pointer naar een "accumulator": de waarde die gaandeweg wordt opgebouwd. De aanroeper zorgt dat deze al een zinnige beginwaarde heeft.
* `f`: de functie die `reduce` voor **elk element**, van voor naar achter, aanroept met `acc` en een pointer naar dat element. De functie `f` past `acc` aan.

Je hoeft in `reduce` zelf **niets** te weten over de types, dat doet `f`. Een voorbeeld met `int`:

```c
void add_int(void *acc, const void *item)
{
    *(int *) acc += *(const int *) item;
}

int main(void)
{
    int numbers[] = {3, 1, 4, 1, 5};
    int sum = 0;
    reduce(numbers, 5, sizeof(int), &sum, add_int);
    // sum is nu 14
}
```

En hetzelfde `reduce` voor een array van strings (`char *`). Let op dat `item` hier wijst naar een `char *`, dus het is een `char **`:

```c
void longest(void *acc, const void *item)
{
    const char *current = *(char **) acc;
    const char *candidate = *(char * const *) item;
    if (strlen(candidate) > strlen(current))
    {
        *(const char **) acc = candidate;
    }
}

int main(void)
{
    char *words[] = {"appel", "peer", "aardbei", "kers"};
    char *best = "";
    reduce(words, 4, sizeof(char *), &best, longest);
    // best is nu "aardbei"
}
```

De functie heeft `reduce` kan je implementeren in maar een paar regels. Het moeilijke zit in de pointers, niet in de lengte. Je mag in `reduce.c` een `main` zetten om te testen (de checks halen die er weer uit). Probeer ten minste drie verschillende typen: `int`, `double`, en `char *`.

## Uitdaging

Schrijf met `reduce` (en dus zonder zelf te loopen) functies die:

* het maximum van een array `double`s bepalen;
* tellen hoeveel strings in een array met een `a` beginnen;
* het gemiddelde van een array `int`s uitrekenen. Wat moet je daarvoor in je accumulator opslaan? Een `struct` met een som en een teller is een voor de hand liggende keuze.
