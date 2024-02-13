# Morse++

> Onderstaande uitleg over Morse vind je ook op <https://nl.wikipedia.org/wiki/Morse>

Morse code gaat via signalen over tijd, bijvoorbeeld door middel van geluidsignalen of lichtflitsen. Volgens een bepaald ritme worden deze signalen doorgegeven. Op iedere tijdstap in dat ritme is er of een signaal of geen signaal: geluid of geen geluid, licht of geen licht. Dit kunnen we zo noteren:

    ===,===,,,===,===,===,,,=,===,=,,,=,=,=,,,=,,,,,,,===,=,===,=,,,===,===,===,,,===,=,=,,,=

> Je kan dit bericht ook [hier beluisteren](https://upload.wikimedia.org/wikipedia/commons/e/e2/Morse_code.ogg).

Een `=` is een signaal op een tijdstap, een `,` het ontbreken van een signaal op een tijdstap. Combinaties van `=` en `,` maken vijf mogelijke symbolen:

- `,` is een spatie tussen symbolen
- `,,,` is een spatie tussen karakters
- `,,,,,,,` is een spatie
- `=` is een zogenaamde `dit`
- `===` is een zogenaamde `dah`

Een combinatie van `dit`s en `dah`s vormen letters uit het alfabet. Een `dit` representeren we met `.` en een `dah` met `-`. Het alfabet ziet er zo uit:

* a: `.-`
* b: `-...`
* c: `-.-.`
* d: `-..`
* e: `.`
* f: `..-.`
* g: `--.`
* h: `....`
* i: `..`
* j: `.---`
* k: `-.-`
* l: `.-..`
* m: `--`
* n: `-.`
* o: `---`
* p: `.--.`
* q: `--.-`
* r: `.-.`
* s: `...`
* t: `-`
* u: `..-`
* v: `...-`
* w: `.--`
* x: `-..-`
* y: `-.--`
* z: `--..`

Schrijf een programma `morse_more.c` dat als volgt werkt:

    $ ./morse
    Usage: ./morse <code>

    $ ./morse "===,===,,,===,===,===,,,=,===,=,,,=,=,=,,,=,,,,,,,===,=,===,=,,,===,===,===,,,===,=,=,,,="
    morse code

    $ ./morse "=,=,=,=,,,=,,,=,===,=,=,,,=,===,=,=,,,===,===,===,,,,,,,=,===,===,,,===,===,===,,,=,===,=,,,=,===,=,=,,,===,=,="
    hello world

Je mag aannemen dat de gebruiker altijd een valide morse code invoert. `TOF` hoeft niet 😄

> `argc` & `argv`? Zie de [command-line arguments short](/shorts/argv)