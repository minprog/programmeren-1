# Alfabet

Schrijf een programma `alfabet.c` dat van twee woorden bepaalt welke eerder in het woordenboek voorkomt. Ook maken we geen verschil tussen hoofdletters en kleine letters.

    $ ./alfabet
    Woord 1: Taylor
    Woord 2: Lana
    Lana first

    $ ./alfabet
    Woord 1: shark
    Woord 2: sWoRd
    shark first

    $ ./alfabet
    Woord 1: Daantje
    Woord 2: Daan
    Daan first

    $ ./alfabet
    Woord 1: amanda
    Woord 2: Amanda
    No need to decide!

Als beginpunt kan je deze code gebruiken:

    #include <cs50.h>
    #include <stdio.h>
    #include <string.h>

    int main(int argc, string argv[])
    {
        // TODO
    }
