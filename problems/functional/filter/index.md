# Filter

In de vorige opdracht gaf je een functie mee die elk element **verandert**. Nu geef je een functie mee die voor elk element **beslist**: blijft het erin, of gaat het eruit? Zo'n functie die `true` of `false` teruggeeft heet een *predicate*.

## Opdracht

Schrijf in `filter.c` de functie

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

Je mag in `filter.c` een `main` zetten om je functie zelf te testen. De checks halen die `main` er voor het testen weer uit. Vergeet `#include <stdbool.h>` niet.

## Combineren

Schrijf als test een paar predicates (`is_even`, `is_positive`, `is_prime`) en combineer `map` en `filter`: kwadrateer alle getallen, en houd daarna alleen de getallen over die groter zijn dan 10. Merk op hoe weinig code dat is, omdat de "wat" (de functie) en het "hoe" (de loop) gescheiden zijn.
