# Map

In dit bonusonderdeel maak je kennis met een stijl van programmeren die je in veel andere talen tegenkomt (Python, JavaScript, Haskell): **functioneel programmeren**. Het kernidee: een functie is ook maar een waarde. Je kunt een functie in een variabele stoppen, meegeven aan een andere functie, of in een array zetten.

Ook in C kan dat, met een **function pointer**. Die gebruik je in deze opdracht en de twee die volgen (`filter` en `reduce`), en daarna in de grote opdracht `qsort`.

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

Schrijf in `map.c` de functie

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

Je mag in `map.c` een `main` zetten om je functie zelf te testen. De checks halen die `main` er voor het testen weer uit en gebruiken hun eigen `main`, met allerlei verschillende functies.

Zorg ervoor dat `map` goed werkt voor een lege array (`n == 0`) en voor functies die geen kwadraat of verdubbeling zijn, bijvoorbeeld `abs` of een functie die de waarde negeert.

## Uitdaging

Wat als je `f` wilt laten werken met een extra getal, zoals "tel 5 op bij elk element"? Met alleen een `int (*)(int)` heb je dan een andere functie nodig voor elke waarde (`add_5`, `add_6`, ...). In C los je dat op door extra gegevens als `void *` mee te geven. Daar komen we bij `reduce` en `qsort` op terug.
