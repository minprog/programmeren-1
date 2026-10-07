# Generic map en filter

In de vorige opdracht werkten `map` en `filter` alleen voor arrays van `int`. Wil je hetzelfde voor `double`s, of voor strings, dan moet je alles opnieuw schrijven. Dat is zonde, want de loop is precies hetzelfde. Alleen het type verschilt.

In deze opdracht schrijf je `map` en `filter` nog een keer, maar dan voor **elk type**. Daarvoor heb je een **void pointer** nodig.

## Void pointers

Een `void *` is een pointer naar "iets", zonder dat C weet wat. Je kunt er alleen niet veel mee: je kunt hem niet dereferencen (`*p`) en je kunt er geen rekenwerk mee doen (`p + 1`), want C weet niet hoe groot het ding is waar hij naar wijst. Wel kun je elke pointer naar een `void *` omzetten en terug:

    int x = 42;
    void *p = &x;            // kan zonder cast
    int *q = (int *) p;      // terug, met cast
    printf("%i\n", *q);      // 42

Dat is hoe functies als `memcpy` en `qsort` met alle types kunnen werken. De verantwoordelijkheid verschuift naar jou: **jij** moet weten wat er in de `void *` zit.

### Rekenen met bytes

Stel je hebt een array `array` van `n` elementen, elk `size` bytes groot, maar je hebt alleen een `void *`. Hoe kom je bij element `i`? Je telt in bytes. Een `char` is per definitie precies 1 byte groot, dus een `char *` is de manier om met losse bytes te rekenen:

    void *item = (char *) array + i * size;

Dit verschuift je `i * size` bytes op, vanaf het begin van de array. Neem even de tijd om te begrijpen waarom dit werkt.

### Kopiëren met bytes

Om een element te kopiëren heb je het type niet nodig, je kopieert gewoon `size` bytes. Daarvoor bestaat [`memcpy`](https://manual.cs50.io/3/memcpy) uit `<string.h>`:

    memcpy(destination, source, size);

Let op: `memcpy` mag de geheugengebieden van `destination` en `source` niet laten overlappen. Dat zal in deze opdracht ook niet gebeuren, zolang je nooit een element naar zichzelf kopieert!

## Opdracht

Schrijf in **één bestand**, `generic.c`, twee functies.

### Generic map

    void map_generic(void *array, size_t n, size_t size, void (*f)(void *item));

Deze functie roept `f` aan voor **elk element** van `array`, van voor naar achter, met een pointer naar dat element. De functie `f` past het element via die pointer zelf aan. Je hoeft in `map_generic` zelf niets over het type te weten, dat doet `f`.

Een voorbeeld met `double`:

    void halve(void *item)
    {
        double *x = item;
        *x = *x / 2;
    }

    int main(void)
    {
        double values[] = {1.0, 5.0, 3.0};
        map_generic(values, 3, sizeof(double), halve);
        // values is nu {0.5, 2.5, 1.5}
    }

### Generic filter

    size_t filter_generic(void *array, size_t n, size_t size, bool (*keep)(const void *item));

Deze functie werkt zoals `filter` in de vorige opdracht: alle elementen waarvoor `keep` `true` teruggeeft komen **vooraan in de array** te staan, in dezelfde volgorde als waarin ze oorspronkelijk stonden. De functie geeft terug hoeveel elementen er overblijven. Je filtert weer *in place*, zonder extra array of `malloc`.

Een voorbeeld met strings (`char *`). Let op: `item` wijst hier naar een element van de array, en dat element is zelf een `char *`. Het is dus een `char **`:

    bool is_long(const void *item)
    {
        const char *word = *(char * const *) item;
        return strlen(word) > 4;
    }

    int main(void)
    {
        char *words[] = {"appel", "peer", "aardbei", "kers", "banaan"};
        size_t m = filter_generic(words, 5, sizeof(char *), is_long);
        // m is 3, en de eerste drie elementen van words zijn {"appel", "aardbei", "banaan"}
    }

Je mag in `generic.c` een `main` zetten om je functies zelf te testen. De checks halen die `main` er voor het testen weer uit. Probeer ten minste drie verschillende typen: `int`, `double` en `char *`. Vergeet de `#include`s voor `<stdbool.h>`, `<stddef.h>` en `<string.h>` niet.

## Combineren

Maak een array van `struct`s, bijvoorbeeld `struct { char name[20]; int age; }`. Gebruik `map_generic` om iedereen een jaar ouder te maken, en `filter_generic` om alleen de volwassenen over te houden. Je functies hoeven daarvoor niet te veranderen.
