# Biggest Square

Schrijf een programma `biggest_square.c` dat op een kaart met obstakels het **grootste vierkant** zoekt dat nog vrij is, en dat vierkant op de kaart intekent.

## Downloaden

Download de [startcode](https://github.com/minprog/programmeren-1/raw/refs/heads/2026/problems/biggest_square/biggest_square.c) en een [voorbeeldkaart](https://github.com/minprog/programmeren-1/raw/refs/heads/2026/problems/biggest_square/kaart.txt).

## De kaart

Een kaart is een tekstbestand waarin elk vakje een `.` (leeg) of een `o` (obstakel) is. Bijvoorbeeld:

    ...........................
    ....o......................
    ............o..............
    ...........................
    ....o......................
    ...............o...........
    ...........................
    ......o..............o.....
    ..o.......o................

Het programma krijgt de naam van het bestand met de kaart als command-line argument:

    $ ./biggest_square kaart.txt

Krijgt het programma niet precies één argument, dan print het `Usage: ./biggest_square <kaart>` en returnt het `1` uit `main`.

Om het bestand te lezen staat in de startcode al de functie `read_map`:

    int read_map(string filename, string lines[], int max_lines);

Die zet elke regel van het bestand als string (zonder de enter aan het eind) in het array `lines`, en geeft terug hoeveel regels het bestand heeft. Dat kunnen er meer zijn dan `max_lines`, maar dan worden alleen de eerste `max_lines` regels in `lines` gezet. Kan het bestand niet geopend worden, dan geeft `read_map` het getal `-1` terug. Hoe `read_map` precies werkt hoef je niet te begrijpen, alleen hoe je hem gebruikt.

## De opdracht

Zoek het grootste vierkant dat alleen uit lege vakjes bestaat en print de kaart, waarbij de vakjes van dat vierkant vervangen zijn door een `x`:

    $ ./biggest_square voorbeeld.txt
    .....xxxxxxx...............
    ....oxxxxxxx...............
    .....xxxxxxxo..............
    .....xxxxxxx...............
    ....oxxxxxxx...............
    .....xxxxxxx...o...........
    .....xxxxxxx...............
    ......o..............o.....
    ..o.......o................

Het is echt een vierkant, ook al ziet het er in de terminal niet zo uit.

Zijn er meerdere grootste vierkanten, kies dan het vierkant dat het **hoogst** op de kaart ligt, en als dat er ook meerdere zijn, het vierkant dat het meest **links** ligt. Zijn er helemaal geen lege vakjes, dan print je de kaart gewoon ongewijzigd.

## Foute kaarten

In de startcode staan twee constanten:

    #define MAX_LINES 100
    #define MAX_WIDTH 100

Een kaart is alleen geldig als:

- er minstens één en hoogstens `MAX_LINES` regels zijn
- alle regels minstens één en hoogstens `MAX_WIDTH` tekens lang zijn, en allemaal even lang
- de regels alleen bestaan uit `.` en `o`

Is de kaart niet geldig, of bestaat het bestand niet, print dan alleen `map error` en return `1` uit `main`. Print in dat geval dus ook geen (deel van de) kaart!

    $ ./biggest_square fout.txt
    map error

## Hints

- Maak zelf kleine kaarten in een tekstbestand om je programma mee te testen, ook foute kaarten.
- Grotere willekeurige kaarten maak je met de [kaartgenerator](https://github.com/minprog/programmeren-1/raw/refs/heads/2026/problems/biggest_square/generate.py). Dat is een Python-programma. Deze kun je ook in Terra uitvoeren. Geef het een bestandsnaam, breedte, hoogte en het percentage obstakels mee:

      $ python generate.py kaart.txt 60 30 5
      kaart van 60 bij 30 geschreven naar kaart.txt
- Controleer eerst of de hele kaart geldig is, en ga pas daarna zoeken.