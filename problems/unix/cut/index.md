# UNIX: cut

Schrijf een tool die van een tekstbestand een gekozen kolom van uitknippen. Elke regel bevat 1 of meer stukjes data, gescheiden door een komma.

    Rory,+31655551938
    Wes,+31655551121
    Tanisha,+31655559831
    Reuben,+31655554102

De naam van het tekstbestand en de gekozen kolom worden opgegeven als command-line arguments.

    cut -f2 telefoon.txt

Als je verder wil gaan dan bovenstaande opdracht, gebruik dan `man cut` om te kijken welke opties het commando nog meer kan bieden, en implementeer hier één of twee van.
