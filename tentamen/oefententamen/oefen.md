# Oefententamen

Regels voor het tentamen:

- Je mag tot uiterlijk 30 minuten na de begintijd starten.
- Je moet minimaal tot 30 minuten na de begintijd in de zaal blijven.
- Leg je collegekaart klaar op tafel (of een andere officiële ID met foto).
- Stilte in de zaal.
- Er is geen pauze, overdrijf niet met drinken, toiletbezoek op verzoek.
- Geen andere dingen open dan de tentamen-website.
- Notifications op je laptop staan uit. Je telefoon is helemaal uit en ligt op tafel.
- Ben je klaar en de tijd is nog niet verstreken, dan kun je op Submit drukken, langs de docent lopen om af te tekenen, en dan direct de zaal verlaten.
- Als de tijd verstreken is geeft de docent de instructie om op Submit te drukken en dan te wachten tot de docent langskomt.

## Doel van het tentamen

Op het tentamen vind je een aantal opdrachten. Het doel van het tentamen is te demonstreren dat je zelfstandig een oplossing voor een probleem kunt ontwikkelen, en daarbij gebruik kunt maken van de basistechnieken van programmeren, zoals bijvoorbeeld de verschillende soorten loops, if-else-constructies, enzovoort.

Op het moment van het tentamen zou je alle opdrachten goed moeten kunnen maken zonder begeleiding. Maar, door de tijdsbeperking kan het best zijn dat je een opdracht niet kunt maken! Of er gaat iets mis. Dat hoeft geen probleem te zijn, als maar overtuigend zichtbaar is dat je het programmeren beheerst. Daarvoor hoef je niet alle opdrachten helemaal goed te hebben.

Vanwege het doel van het tentamen heeft het geen zin om alleen het juiste antwoord uit te printen zodat `check50` tevreden is (het zogenaamde "hardcoden").

Bij het oefententamen krijg je een selectie opgaven die afgestemd is op wat je op dit moment weet. "Falen" bestaat niet bij dit oefententamen, ook niet als je geen enkele opdracht oplost binnen de tijd. Mocht het niet lukken, dan kun je naderhand hulp vragen of extra tijd nemen om het af te maken.

Ook voor het oefententamen is het essentieel dat je deze maakt zonder gebruik van internet of hulp van anderen. Alleen zo begrijp je waar je zelf nog vastloopt.

Succes!

## Waar we naar op zoek zijn

Je kunt in je uitwerking laten zien dat je:

- Kleine programmeerproblemen in beperkte tijd kunt oplossen
- De basisconstructies if, else, for, while en dergelijke beheerst
- Om kunt gaan met command-line arguments
- Begrijpt hoe je variabelen kunt inzetten om antwoorden te verzamelen, uit te rekenen
- Kunt werken met strings en characters, en met arrays
- Zorgvuldig output kunt construeren met print statements
- Meerdere functies kunt definiëren die elk een deel van de oplossing geven
- Nette code kunt schrijven met relevante documentatie

## Beperkingen

In je uitwerking mag je alleen gebruik maken van de library-functies die behandeld zijn en wat eventueel in de opdracht vermeld staat.

---

## Makelaar (t/m module 4)

De waarde van een huis in een bepaalde wijk is afhankelijk van het aantal vierkante meters. Bovendien maken het aantal badkamers en slaapkamers ook uit voor de prijs.

- Voor wijk 1 is de vierkantemeterprijs voor een woning 5000,-, elke slaapkamer voegt 20000,- euro toe aan de prijs en als de woning meer dan 1 badkamer heeft dan komt er 2% bovenop de totale prijs (vermenigvuldig met 1.02).
- Voor wijk 2 is de vierkantemeterprijs voor een woning 6000,-, elke slaapkamer voegt 10000,- euro toe aan de prijs en het aantal badkamers maakt niet uit.

Schrijf de functie `verkoopprijs` die de prijs van een woning berekent.

    $ ./makelaar
    55 m2, 1 sk, 1 bk, wijk 1
    De waarde van het huis is EUR 295000,-

    150 m2, 3 sk, 3 bk, wijk 1
    De waarde van het huis is EUR 826200,-

    150 m2, 3 sk, 3 bk, wijk 2
    De waarde van het huis is EUR 930000,-

Het bedrag moet precies zo geprint worden als hierboven: een getal bestaande uit een aantal cijfers en dan een komma en een streepje er direct achter.

## Header (t/m module 5)

Schrijf de functie `header` die een header comment genereert voor de gebruiker. Het programma moet als volgt werken:

    $ ./header
    /*******************************************************************************
    * Author: Doug Lloyd                                                           *
    * Date: 02/10/2023                                                             *
    * Description: Prints hello world                                              *
    *******************************************************************************/

De geprinte header is altijd precies 80 karakters breed. Zorg dat je exact de vorm volgt die hierboven in de voorbeelden zichtbaar is! Zo staan er nergens in de header spaties aan het *begin* van de regel. Een belangrijk aspect van de opgave is dat de sterretjes helemaal aan het eind van de regen staan, keurig onder elkaar.

## Spam (t/m module 7)

Omdat je mailbox vol stroomt met spam ga je zelf een spamfilter schrijven. Je ontdekt dat spammers vaak woorden als "lottery", "cash" of "money" vervangen voor "lo\|\|ery", "Ca$h" of M0n3y. Tijd om dit op te lossen! Door de verhouding tussen het aantal spaties, hoofdletters, kleine letters overige karakters te meten kan je inschatten of een email wel of geen spam is (nou ja, min of meer).

Schrijf de functie `spam_check` die een email als spam of als normale mail classificeert. Een mail is spam als deze meer dan 10% niet-alfabetische karakters bevat. Zorg dat je het percentage netjes afrondt vóór je bepaalt of het spam is. Daarvoor kan je de `round`-functie gebruiken. Maar let op: spaties worden helemaal genegeerd en niet meegeteld in de berekening (tel na in het eerste voorbeeld).

    $ ./spam
    -> "CaZhh M0n3y"
    Er zijn 20 procent niet-alfabetische karakters.
    Deze mail is spam.

    -> "Dit was zeker geen spam!"
    Er zijn 5 procent niet-alfabetische karakters.
    Deze mail is normaal.

    -> ""
    Deze mail heeft geen subject.

## Afgebroken (t/m module 7)

Je hebt een tekst uit de krant gekopiëerd. Alleen er staan nog verdwaalde afbreekstreepjes in de tekst van woorden die niet meer op de regel pasten in het oorspronkelijke bericht. Elk onterecht afbreekstreepje in de originele tekst wordt gevolgd door een spatie.

Schrijf de functie `afgebroken` die de gegeven tekst print zonder deze streepjes en spaties.

    $ ./afgebroken
    Origineel: Nederlanders worden steeds ouder, vooral door- dat ze na hun 65ste ...
    Nederlanders worden steeds ouder, vooral doordat ze na hun 65ste langer in ...

    Origineel: Over de identiteit van de schutter zegt de po- litie: 'Als het de ...
    Over de identiteit van de schutter zegt de politie: 'Als het de man is die ...

    Origineel: Een 36-jarige Geldropse heeft deze week een in- breker in haar ...
    Een 36-jarige Geldropse heeft deze week een inbreker in haar schuurtje net ...

## Leestijd (t/m module 8)

Laten we er vanuit gaan dat je 250 woorden per minuut leest en dat een pagina van een boek gemiddeld 300 woorden bevat.

Schrijf de functie `leestijd` die het totaal aantal gelezen pagina's berekent en print, gegeven een array met daarin één of meer getallen die het aantal gelezen minuten voorstellen per leessessie. Rond af op hele pagina's. Voor het afronden kun je de `round`-functie gebruiken.

    $ ./leestijd
    { 35, 50, 10, 15 }
    Je hebt ongeveer 92 pagina's gelezen.
    { }
    Je hebt niet gelezen.
