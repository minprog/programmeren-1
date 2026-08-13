# Acid test

Schrijf een programma dat de pH-waarde van een stof opvraagt en dan bepaalt of de betreffende stof "zuur" is; de pH-waarde is dan kleiner dan 7,0.

    $ ./acid
    pH value: 8.0
    That's not an acid

    $ ./acid
    pH value: 3.5
    That's an acid

## Ontwerp

Maak een bestand genaamd `acid.c`. Neem onderstaande code over en maak het programma af.

    bool is_acidic(float value);

    int main(void)
    {
        float input = get_float("pH value: ");

        // roep functie aan en print boodschap afhankelijk van het resultaat
    }

    bool is_acidic(float value)
    {
        // beslis of dit zuur is (ofwel kleiner dan 7.0)
    }

Het is noodzakelijk om zowel in `is_acidic` als in de `main` een if-else toe te voegen!
