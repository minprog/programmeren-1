# UNIX: uniq

Schrijf een tool die de inhoud van een file naar de terminal print, met uitzondering van dubbele regels. Een "dubbele regel" is een regel die gelijk aan de vorige regel. De naam van de file wordt opgegeven als command-line argument.

Als `dubbel.txt` de volgende woorden bevat:

    woord
    woord
    woord
    woordenlijst
    woordenlijst
    kort
    woord

Zal het deze output geven:

    $ uniq dubbel.txt
    woord
    woordenlijst
    kort
    woord

Als je verder wil gaan dan bovenstaande opdracht, gebruik dan `man uniq` om te kijken welke opties het commando nog meer kan bieden, en implementeer hier één of twee van.
