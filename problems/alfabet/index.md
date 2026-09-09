# Alfabet

Schrijf een programma `alfabet.c` dat van twee woorden bepaalt welke eerder in het woordenboek voorkomt. Ook maken we geen verschil tussen hoofdletters en kleine letters.

> Maak bij deze opdracht **geen** gebruik van `strcmp` en `strcasecmp`.

## Eisen

- Het programma moet zelf controleren of de gebruiker precies twee argumenten meegeeft. Zo niet, dan print het programma `Usage: ./alfabet <woord1> <woord2>` en returnt het de waarde `1` uit `main`.

## Voorbeelden

    $ ./alfabet Taylor Lana
    Lana first

    $ ./alfabet shark sWoRd
    shark first

    $ ./alfabet Daantje Daan
    Daan first

    $ ./alfabet amanda Amanda
    No need to decide!

Bij een verkeerd aantal argumenten reageert het programma als volgt, en sluit het af met exit code 1.

    $ ./alfabet
    Usage: ./alfabet <woord1> <woord2>

    $ ./alfabet Taylor
    Usage: ./alfabet <woord1> <woord2>

    $ ./alfabet Taylor Lana Olivia
    Usage: ./alfabet <woord1> <woord2>