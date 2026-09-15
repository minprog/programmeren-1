# Tennis

Implementeer een tennisspel met woorden in `tennis.c`. Er zijn twee spelers in het spel en speler 1 begint door een woord in te voeren. Daarna moet speler 2 een woord invoeren dat begint met de laatste letter van het woord van speler 1. Hierna is speler 1 weer aan de beurt en moet een woord invullen dat begint met de laatste letter van het woord van speler 2. Het spel gaat door totdat één van de spelers een woord opgeeft dat begint met een verkeerde letter.

Het programma moet als volgt werken:

    $ ./tennis
    Speler 1, geef een woord: hello
    Speler 2, geef een woord: world
    Speler 1 wint!

    $ ./tennis
    Speler 1, geef een woord: dat
    Speler 2, geef een woord: tentamen
    Speler 1, geef een woord: nooit
    Speler 2, geef een woord: top
    Speler 1, geef een woord: wijk
    Speler 2 wint!

### Hints

* Het tennisspel is misschien wat ingewikkelder dan het lijkt. Probeer eerst het spel uit te werken in pseudocode.
* Let goed op de details! Kan speler 1 met haar eerste gok verliezen?
* Zodra een speler een verkeerd woord geeft, ligt de winnaar vast. Je kunt dan met `return` meteen uit `main` stappen, nadat je de winnaar hebt geprint.