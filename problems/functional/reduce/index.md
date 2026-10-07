# Reduce

`map` verandert elk element, `filter` selecteert elementen, en `reduce` **combineert alle elementen tot één waarde**: de som van een rij getallen, het grootste element, de langste string, ...

In de vorige opdracht heb je `map` en `filter` voor elk type geschreven met `void *`. Dat gebruik je hier weer: je rekent met `size` en een `char *` om bij element `i` te komen, en `f` weet zelf welk type er in het geheugen staat.

Het verschil met `map` en `filter` is dat `reduce` een **resultaat** teruggeeft dat niet een array is. Het resultaat wordt gaandeweg opgebouwd in een zogenaamde *accumulator*, en die moet ook weer van elk type kunnen zijn. Ook die geef je daarom door als `void *`.

## Opdracht

Schrijf in `reduce.c` de functie

    void reduce(const void *items, size_t n, size_t size,
                void *acc, void (*f)(void *acc, const void *item));

met de volgende parameters:

* `items`: pointer naar het begin van een array met `n` elementen.
* `n`: het aantal elementen.
* `size`: de grootte van één element in bytes.
* `acc`: pointer naar een "accumulator": de waarde die gaandeweg wordt opgebouwd. De aanroeper zorgt dat deze al een zinnige beginwaarde heeft.
* `f`: de functie die `reduce` voor **elk element**, van voor naar achter, aanroept met `acc` en een pointer naar dat element. De functie `f` past `acc` aan.

Je hoeft in `reduce` zelf **niets** te weten over de types, dat doet `f`. Een voorbeeld met `int`:


    void add_int(void *acc, const void *item)
    {
        *(int *) acc += *(const int *) item;
    }

    int main(void)
    {
        int numbers[] = {3, 1, 4, 1, 5};
        int sum = 0;
        reduce(numbers, 5, sizeof(int), &sum, add_int);
        // sum is nu 14
    }

En hetzelfde `reduce` voor een array van strings (`char *`). Let op dat `item` hier wijst naar een `char *`, dus het is een `char **`:

    void longest(void *acc, const void *item)
    {
        const char *current = *(char **) acc;
        const char *candidate = *(char * const *) item;
        if (strlen(candidate) > strlen(current))
        {
            *(const char **) acc = candidate;
        }
    }

    int main(void)
    {
        char *words[] = {"appel", "peer", "aardbei", "kers"};
        char *best = "";
        reduce(words, 4, sizeof(char *), &best, longest);
        // best is nu "aardbei"
    }

`reduce` kun je in maar een paar regels implementeren. Het moeilijke zit in de pointers. Je mag in `reduce.c` een `main` zetten om te testen (de checks halen die er weer uit). Probeer ten minste drie verschillende typen: `int`, `double`, en `char *`.

## Reduce gebruiken

Schrijf in `reduce.c`, naast `reduce` zelf, nog drie functies die gebruikmaken van `reduce`. In deze functies schrijf je **zelf geen loop** (`for`, `while`): het lopen over de array is het werk van `reduce`. Alle drie de functies krijgen eerst de array en daarna het aantal elementen.

* `max_double` geeft het grootste getal uit een array `double`s. Je mag ervan uitgaan dat de array minstens één element heeft. Pas op voor arrays met alleen negatieve getallen!
* `count_a` geeft terug hoeveel strings in een array strings (`char *`) beginnen met een kleine letter `a`. Bij een lege array is dat 0.
* `average` geeft het gemiddelde van een array `int`s, als `double`. Bij een lege array is dat 0.0. Het gemiddelde moet ook kloppen als de som van alle getallen niet meer in een `int` past.

Zo worden ze gebruikt:

    double values[] = {2.5, 9.0, 4.0};
    max_double(values, 3);   // 9.0

    char *words[] = {"appel", "peer", "aardbei", "Aap"};
    count_a(words, 4);       // 2

    int ages[] = {4, 8, 15, 16, 23, 42};
    average(ages, 6);        // 18.0

Welke accumulator je nodig hebt en wat voor functie je aan `reduce` meegeeft, bepaal je zelf. Voor het gemiddelde is één getal als accumulator bijvoorbeeld niet genoeg: wat moet je onderweg bijhouden? Je mag in `reduce.c` zoveel hulpfuncties en eigen types toevoegen als je nodig hebt.
