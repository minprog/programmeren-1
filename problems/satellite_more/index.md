# Satellite++

Vanuit een satelliet worden metingen gedaan om de temperatuur op aarde in de gaten te houden. Eén van de sensoren werkt niet perfect. Deze sensor hapert vaak waardoor er lange tijden helemaal geen metingen worden gedaan. Aan jou de taak om dit zo goed mogelijk te fixen.

Voor deze opdracht hoef je geen `main` functie te schrijven. Wel is het slim om zelf een `main` functie te schrijven om je eigen functies goed te kunnen testen.

### Lineaire interpolatie

Soms geeft de sensor helemaal geen meting en verschijnt het getal `-1` in de array om dit aan te geven. Los deze missende waardes op door middel van lineaire interpolatie:

* Mist er één waarde? Neem dan het gemiddelde van de getallen ervoor en erna.
* Missen er meerdere waardes achterelkaar? Verdeel de waardes gelijkmatig tussen het laatste bekende getal en het eerstvolgende bekende getal.

Bijvoorbeeld:

    1, -1, -1, 8, -1, 6

Wordt:

    1, 3, 5, 8, 7, 6

Want:

* Op index 1 en 2 missen waardes. Het laatste bekende getal is 1, en het eerstvolgende bekende getal is 8. Het verschil is `8 - 1 = 7`. Binnen 3 metingen gaat de waarde van 1 naar 8. Iedere meting komt er dus `7 / 3` bij. 
    * Op index 1 wordt de waarde daarom `1 + 1 * 7 / 3 = 3`
    * Op index 2 wordt de waarde daarom `1 + 2 * 7 / 3 = 5`
* Op index 4 mist ook een waarde. Het vorige getal is 8 en het volgende getal is 6. Op index 4 wordt de waarde daarom `(8 + 6) / 2 = 7`

### Extrapolatie

Missen de eerste of laatste waardes? Extrapoleer dan vanaf de eerste of laatste bekende waarde. Bijvoorbeeld:

    -1, -1, 3, 7, -1

Wordt:

    3, 3, 3, 7, 7

Want:

* Op index 0 & 1 missen er waardes. Het eerstvolgende bekende getal is 3, dus beide waardes worden 3.
* Op index 4 mist een waarde. Het laatste bekende getal is 7, dus op index 4 komt de waarde 7.

## fix_multiple_missing_values

Implementeer hiervoor de functie `void fix_multiple_missing_values(int values[], int n)`. Wijzig de waardes in de array `values` in-place.