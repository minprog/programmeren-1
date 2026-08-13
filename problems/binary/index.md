# Binary

Implementeer de volgende functie in een bestand `binary.c` om individuele bits om te zetten naar een decimaal getal:

    int to_decimal(int bit1, int bit2, int bit3, int bit4);

De functie moet als volgt werken:

    to_decimal(0, 0, 0, 1) // returns 1
    to_decimal(0, 1, 0, 1) // returns 5
    to_decimal(1, 1, 1, 1) // returns 15

Het programma vraagt niet om invoer. Schrijf zelf een `main` waarin je de functie test, bijvoorbeeld door de bovenstaande voorbeelden te printen:

    int main(void)
    {
        printf("%i\n", to_decimal(0, 0, 0, 1));
        printf("%i\n", to_decimal(0, 1, 0, 1));
        printf("%i\n", to_decimal(1, 1, 1, 1));
    }

Dat zou dit moeten opleveren:

    $ ./binary
    1
    5
    15

Wat je precies in de `main` zet is aan jou; het gaat om de functie `to_decimal`.

> Kom je er niet helemaal uit met binair rekenen, grijp dan nog even terug naar het videocollege!

Ben je klaar? Stuur je opdracht in op de **Submit**-tab van deze pagina.