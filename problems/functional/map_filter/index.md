# Map en filter

In dit bonusonderdeel maak je kennis met een stijl van programmeren die je in veel andere talen tegenkomt (Python, JavaScript, Haskell): **functioneel programmeren**. Het kernidee: een functie is ook maar een waarde. Je kunt een functie in een variabele stoppen, meegeven aan een andere functie, of in een array zetten.

Ook in C kan dat, met een **function pointer**. Die gebruik je in deze opdracht en in de twee die volgen, en daarna in de grote opdracht `qsort`.

## Function pointers

Net als variabelen staan functies ergens in het geheugen, en dus heeft elke functie een adres. Dat adres kun je opslaan in een pointer. Bekijk dit voorbeeld:

    #include <stdio.h>

    int double_it(int x)
    {
        return 2 * x;
    }

    int main(void)
    {
        int (*f)(int) = double_it;
        printf("%i\n", f(21));
    }


Dit print `42`. Lees de declaratie `int (*f)(int)` van binnen naar buiten: `f` is een pointer (`*f`) naar een functie die één `int` neemt en een `int` teruggeeft. De haakjes rond `*f` zijn nodig: zonder haakjes is `int *f(int)` een functie die een `int *` teruggeeft!

Een function pointer kun je ook als parameter gebruiken:

    int apply_twice(int (*f)(int), int x)
    {
        return f(f(x));
    }

Met `apply_twice(double_it, 5)` krijg je `20`. Let op dat je bij het meegeven van `double_it` **geen** haakjes schrijft: `double_it()` zou de functie aanroepen, `double_it` is de functie zelf.

> Die syntax is lastig te lezen. Met een `typedef` kun je het leesbaarder maken, bijvoorbeeld `typedef int (*int_function)(int);`. Dan is `int_function f` een parameter van het juiste type.

## Opdracht

In deze opdracht schrijf je in **één bestand**, `map_filter.c`, twee functies. Begin met `map`:

### Map

Schrijf de functie

    void map(int array[], int n, int (*f)(int));

die `f` toepast op **elk element** van `array` (met lengte `n`), en het resultaat terugschrijft op dezelfde plek in de array. Na afloop geldt dus voor elke `i` dat `array[i]` gelijk is aan `f(oude array[i])`.

Een voorbeeld van hoe de functie gebruikt kan worden:

    int square(int x)
    {
        return x * x;
    }

    int main(void)
    {
        int numbers[] = {1, 2, 3, 4};
        map(numbers, 4, square);
        // numbers is nu {1, 4, 9, 16}
    }

Je mag in `map_filter.c` een `main` zetten om je functies zelf te testen. De checks halen die `main` er voor het testen weer uit en gebruiken hun eigen `main`, met allerlei verschillende functies.

Zorg ervoor dat `map` goed werkt voor een lege array (`n == 0`) en voor functies die geen kwadraat of verdubbeling zijn, bijvoorbeeld `abs` of een functie die de waarde negeert.

### Filter

In `map` gaf je een functie mee die elk element **verandert**. Bij `filter` geef je een functie mee die voor elk element **beslist**: blijft het erin, of gaat het eruit? Zo'n functie die `true` of `false` teruggeeft heet een *predicate*.

Schrijf de functie

    int filter(int array[], int n, bool (*keep)(int));


die alle elementen van `array` (met lengte `n`) waarvoor `keep` `true` teruggeeft **vooraan in de array bij elkaar zet**, in dezelfde volgorde als waarin ze oorspronkelijk stonden. De functie geeft terug hoeveel elementen er overblijven. Wat er na die elementen in de array staat maakt niet uit.

Een voorbeeld:

    bool is_even(int x)
    {
        return x % 2 == 0;
    }

    int main(void)
    {
        int numbers[] = {5, 2, 8, 3, 6, 1};
        int m = filter(numbers, 6, is_even);
        // m is 3, en de eerste drie elementen van numbers zijn {2, 8, 6}
    }

Je mag **geen** extra array of `malloc` gebruiken: het filteren gebeurt *in place*.

Vergeet `#include <stdbool.h>` niet.

## Combineren

Schrijf als test een paar predicates (`is_even`, `is_positive`, `is_prime`) en combineer `map` en `filter`: kwadrateer alle getallen, en houd daarna alleen de getallen over die groter zijn dan 10. Merk op hoe weinig code dat is, omdat de "wat" (de functie) en het "hoe" (de loop) gescheiden zijn.
