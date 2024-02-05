# Orakel

"All right," said the computer, and settled into silence again. The two men fidgeted. The tension was unbearable.  
"You’re really not going to like it," observed Deep Thought.  
"Tell us!"  
"All right," said Deep Thought. "The Answer to the Great Question…"  
"Yes...!"  
"Of Life, the Universe and Everything…" said Deep Thought.  
"Yes...!"  
"Is.." said Deep Thought, and paused.  
"Yes...!"  
"Is.."  
"Yes...!!!...?"  
"Forty-two," said Deep Thought, with infinite majesty and calm.

--- The Hitchhiker’s Guide to the Galaxy, Douglas Adams

## Opdracht

Schrijf, in een bestand genaamd `orakel.c`, een programma dat de gebruiker vraagt om antwoord te geven op de 'De grote vraag van het leven, het universum en alles daarbij'.
Als de gebruiker als antwoord `42`, `tweeenveertig`, of `tweeënveertig` geeft, moet het programma `Ja` printen, maar bij elk ander antwoord `Nee`.

    $ ./orakel
    Wat is het antwoord op de grote vraag van het leven, het universum en alles daarbij? 42
    Ja

    $ ./orakel
    Wat is het antwoord op de grote vraag van het leven, het universum en alles daarbij? tweeenveertig
    Ja

    $ ./orakel
    Wat is het antwoord op de grote vraag van het leven, het universum en alles daarbij? drieëntachtig
    Nee

Schrijf je code volgens hetzelfde patroon als bij Acid Test. Dat houdt in, één functie om het antwoord te checken en één main functie.

## Strings vergelijken

Om strings te vergelijken gebruik je in C de functie `strcmp`. Hier vind je alle details: <https://manual.cs50.io/3/strcmp>.

Kijk goed naar de "Return Value" van `strcmp` op <https://manual.cs50.io/3/strcmp#return-value>.

`strcmp` returned dus een `int`. Die `int` is 0 als de strings gelijk zijn. Zo kun je dus kijken of twee strings aan elkaar gelijk zijn:

    string tekst1 = "foo";
    string tekst2 = "bar";

    if (strcmp(tekst1, tekst2) == 0)
    {
        printf("Gelijk!\n");
    }
    else
    {
        printf("Ongelijk!\n");
    }

> Let op, om `strcmp` te gebruiken moet je `string.h` include-en. Dat doe je zo: `#include <string.h>`