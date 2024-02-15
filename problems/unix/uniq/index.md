# UNIX: uniq

Schrijf een tool die de inhoud van een file naar de terminal print, met uitzondering van dubbele regels. Een "dubbele regel" is een regel die gelijk is aan de vorige regel. De naam van de file wordt opgegeven als command-line argument.

Als `bestelling.txt` de volgende woorden bevat:

    ananas
    ananas
    banaan
    wortel
    banaan
    banaan

Zal het deze output geven:

    $ ./uniq bestelling.txt
    ananas
    banaan
    wortel
    banaan
