## Klinkers

Schrijf een programma `klinkers.c` dat van twee woorden bepaalt welke meer klinkers heeft. Het programma print als resultaat het woord met de meeste klinkers. Als beide woorden evenveel klinkers hebben, dan worden ze ook allebei geprint. Het printen gebeurt altijd in lowercase. Je mag aannemen dat de invoer altijd correct is: alleen maar letters.

    $ ./klinkers
    Woord 1: Equal
    Woord 2: renal
    equal

    $ ./klinkers
    Woord 1: aye
    Woord 2: abide
    aye
    abide

    $ ./klinkers
    Woord 1: retina
    Woord 2: AwesOmE
    awesome
    
Als beginpunt kan je deze code gebruiken:
    
    #include <cs50.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    int main(void)
    {
        // TODO
    }