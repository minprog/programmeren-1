# Formule

Als programmeur weet je het maar al te goed: je maakt makkelijk fouten met haakjes. Schrijf daarom een programma `formule.c` dat kijkt of er evenveel haakjes opengaan als dichtgaan in een formule. Is dat niet het geval, dan print het programma dat uit.

Het programma moet als volgt werken:

    $ ./formule
    Geef een formule: hello world!
    Er zijn geen fouten.

    $ ./formule
    Geef een formule: (a + b - (c * d))
    Er zijn geen fouten.

    $ ./formule
    Geef een formule: )a + b(
    Er wordt een haakje te vroeg gesloten.

    $ ./formule
    Geef een formule: a + (c * d
    Er worden te weinig haakjes gesloten.

Tip, kijk goed naar het derde voorbeeld. Hier kloppen het aantal haakjes wel, maar de volgorde niet.
