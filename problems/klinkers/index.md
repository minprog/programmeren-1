# Klinkers

Schrijf een programma `klinkers.c` dat van twee woorden bepaalt welke méér klinkers heeft. Het programma print als resultaat het woord met de meeste klinkers. Als beide woorden evenveel klinkers hebben, dan worden ze ook allebei geprint.

## Eisen

- Het programma moet zelf controleren of de gebruiker precies twee argumenten meegeeft. Zo niet, dan print het programma `Usage: ./klinkers <woord1> <woord2>` en returnt het de waarde `1` uit `main`.
- Het printen gebeurt altijd in lowercase.
- Je mag aannemen dat de woorden zelf altijd correct zijn: alleen maar letters.
- We zien hier de letters *a*, *e*, *i*, *o*, *u* en *y* als klinker.

## Voorbeelden

    $ ./klinkers Equal renal
    equal

    $ ./klinkers aye abide
    aye
    abide

    $ ./klinkers retina AwesOmE
    awesome

Bij een verkeerd aantal argumenten reageert het programma als volgt, en sluit het af met exit code 1.

    $ ./klinkers
    Usage: ./klinkers <woord1> <woord2>

    $ ./klinkers aye
    Usage: ./klinkers <woord1> <woord2>

    $ ./klinkers aye aye aye
    Usage: ./klinkers <woord1> <woord2>
