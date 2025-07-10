# Satellite

Vanuit een satelliet worden metingen gedaan om de temperatuur op aarde in de gaten te houden. Eén van de sensoren werkt niet perfect. Deze sensor geeft zo nu en dan hogere en lagere waardes door dan verwacht, en hapert soms waardoor er helemaal geen metingen worden gedaan. Aan jou de taak om dit zo goed mogelijk te fixen.

Voor deze opdracht hoef je geen `main` functie te schrijven. Wel is het slim om zelf een `main` functie te schrijven om de verschillende functies goed te kunnen testen.

<details markdown="1"><summary markdown="span">Let op met in-place aanpassingen</summary>

Bij deze opdracht ga je aan de slag met het aanpassen van waardes in een array. Dit brengt wat valkuilen met zich mee. Eén zo'n valkuil is het aanpassen van waardes in een loop op basis een voorgaande waarde. Zou je bijvoorbeeld alle waardes één plek willen opschuiven, dan kom je wellicht op de volgende pseudocode uit:

    Voor iedere waarde in de array, behalve de eerste
        de huidige waarde wordt de vorige waarde

Vertaal je dat naar C:

    // voor iedere waarde in de array, behalve de eerste
    for (int i = 1; i < n; i++)
    {
        // de huidige waarde wordt de vorige waarde
        values[i] = values[i - 1];
    }

Zou je deze code runnen met de getallen 1, 2, 3, 4 en iedere ronde uitprinten wat er gebeurt, dan zie je dit:

    1, 1, 3, 4
    1, 1, 1, 4
    1, 1, 1, 1

Uiteindelijk is de hele array dezelfde waarde, namelijk de eerste waarde. Want, terwijl er over de array wordt geïtereerd, worden de waardes in de array aangepast. De waarde op index 0 wordt op index 1 gezet, pas daarna wordt de waarde op index 1 op index 2 gezet, etc. 

Er zijn verschillende manieren om dit soort problemen op te lossen. Eén zo'n manier is een extra variabele om de vorige waarde in bij te houden:

    int previous_value = value[0];
    
    // voor iedere waarde in de array, behalve de eerste
    for (int i = 1; i < n; i++)
    {
        // onthoud de huidige waarde voor het aanpassen 
        int temp_value = values[i];

        // de huidige waarde wordt de vorige waarde
        values[i] = previous_value;

        // onthoud de waarde van voor de aanpassing in previous_value
        previous_value = temp_value;
    }

Soms zijn er ook elegantere manieren om dit probleem op te lossen, zo kan in dit geval ook de loop worden omgedraaid. Dus in plaats van optellen, tellen we af:

    // voor iedere waarde in de array, behalve de eerste
    for (int i = n - 1; i > 0; i--)
    {
        // de huidige waarde wordt de vorige waarde
        values[i] = values[i - 1];
    }

</details>


## Stap 1: print_array

Schrijf allereerst een functie `print_array` dat een array van gehele getallen op één regel print. Alle waardes zijn gescheiden door de een komma en een spatie. Als volgt:

    1, 2, 3

Dit is de signature van de functie:

    void print_array(int values[], int n);

> Schrijf deze functie als eerst, want zo kan je later goed nagaan dat je andere functies werken zoals verwacht.

## Stap 2: fix_missing_values

Soms geeft de sensor helemaal geen meting en verschijnt het getal `-1` in de array om dit aan te geven. Los deze missende waardes op door middel van lineaire interpolatie. Vervang een missende waarde door het gemiddelde van de waarde ervoor en direct erna.

Bijvoorbeeld:

    1, -1, 8, -1, 6

Wordt:

    1, 4, 8, 7, 6

Want:

* Op index 1 mist een waarde. De waarde ervoor is 1, de waarde erna is 8, het gemiddelde is `(1 + 8) / 2 = 4`
* Op index 3 mist ook een waarde. De waarde ervoor is 8, de waarde erna is 6, het gemiddelde is `(8 + 6) / 2 = 7` 

Implementeer hiervoor de functie `void fix_missing_values(int values[], int n)`. Wijzig de waardes in de array `values` in-place.

## Stap 3: compute_moving_average

Om de uitschieters in de metingen glad te strijken kan je een bewegend gemiddelde filter gebruiken. Dit vervangt elk element (behalve het eerste en laatste) door het gemiddelde van zichzelf en de directe buren (links en rechts). Zo wordt de volgende input:

    1, 4, 3, 6, 3

Aangepast naar:

    1, 2, 4, 4, 3

Want:

* Voor index 1: `(1 + 4 + 3) / 3 = 2` (afgerond naar beneden)
* Voor index 2: `(4 + 3 + 6) / 3 = 4` (afgerond naar beneden)
* Voor index 3: `(3 + 6 + 3) / 3 = 4`

Implementeer hiervoor de functie `void compute_moving_average(int values[], int n)`. Wijzig de waardes in de array `values` in-place.
