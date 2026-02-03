# Functions

Maak een nieuw bestand genaamd `functions.c`.

Copy the following code into the file:

    #include <stdio.h>

    int times_two(int a);
    void print_int(int a);

    int main(void)
    {
        int x = 2;
        int y = times_two(x);

        print_int(y);
    }

    int times_two(int a)
    {
        return a * 2;
    }

    void print_int(int a)
    {
        printf("Value = %i\n", a);
    }

## Tip

> Als je even totaal niet weet hoe te beginnen, kijk dan het filmpje [Short: Functions](/shorts/functions) om goed te begrijpen waar functies voor zijn. Vergeet niet dat je ook om hulp en uitleg kan vragen!

## Stap 1

Maak een functie genaamd `half` die een integer aanneemt en dan die integer, gedeeld door twee, teruggeeft (met `return`!). Je mag gewoon door twee delen en je hoeft niet na te denken over afronden enzo.

Hoe?

Bedenkt dat het maken van een functie uit twee delen bestaat.

- Je schrijft een "prototype" bovenaan `functions.c`.
- En meer naar beneden, tussen de andere functies, schrijf je de "implementatie".

Volg hierbij het voorbeeld van `times_two`. Maar hou `times_two` wel intact, schrijf je eigen functie erbij!

**Test** de functie door in de `main` de regel `int y = times_two(x);` te wijzigen in `int y = half(x);`. Run het programma en begrijp hoe het werkt!

## Stap 2

Maak een functie genaamd `print_float` die een float aanneemt en deze waarde dan uitprint, maar met precies 2 decimalen max. Het moet er zo uitzien: `Value = X.XX`.

> Zoals je hebt gezien kun je met `%`-codes (placeholders) getallen printen. `%i` of `%d` voor integers en `%f` voor floats. Hierbij kun je ook de *precisie* opgeven. Wil je een float met maximaal 1 decimaal printen, dan gebruik je `%.2f`. Je ziet de punt staan, dat is dus het decimaalteken, en het getal erachter geeft "hoeveel cijfers achter de komma".

**Test** de functie door in de main een `print_float(2.7444)` toe te voegen. Run het programma om te checken dat dit eruit komt:

    Value = 2.74

## Stap 3

Maak een functie genaamd `average` die twee _integers_ neemt en het gemiddelde van de twee integers geeft (en dat moet een _float_ zijn, dus een kommagetal).

Denk eerst even goed na hoe het prototype eruit moet zien: wat zijn de types van de parameters? Wat is het type van de returnwaarde?

Bedenk een voorbeeld van twee integers en welk getal de functie dan als resultaat moet geven.

**Test** je functie door `average` aan te roepen in je `main` en print het resultaat met hulp van de bestaande functie `print_float`.

## Stap 4

Maak een functie genaamd `max` die twee _floats_ aanneemt en de grootste van de twee geeft, ook gewoon als _float_.

**Test** je functie door code aan de `main` toe te voegen.

## Klaar?

Inleveren op de Submit-tab!

<!--

## Exercise 5

Create a function called `print_array` that takes two parameters: a _float array_ and an _integer_ (denoting the length of the array). The function should print the entire array of floats to a precision of two decimals. E.g.,

    float a[] = {1.555, 3, 1.645, 178};
    print_array(a, 4);

should print something like:

    1.55, 3.00, 1.64, 178.00

**Test** your function, by creating an array in `main` and call the function `print_array` on that array.

## Exercise 6

Create a function that finds the maximum value in a _float_ array. Before you implement the function, ask yourself the following questions:

- What is a good name for the function?
- What should the type of the return value be?
- What are the parameters? What are their types and what are good names for them?

Think of a couple of good testcases. What is the max of `{1.555, 3, 1.645, 178}`? What is the max of an array with only one element? What is the max of an empty array?

**Test** your function by adding code to `main`.

-->
