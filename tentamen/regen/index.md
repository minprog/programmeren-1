# Tentamen: Regen

Dit is een oefenopdracht voor het tentamen. Probeer 'm in maximaal 30 minuten te maken. Als dat niet lukt, denk dan even goed na welke informatie je mist of wat je nodig hebt om een goed begin te maken. Zoek dat uit en probeer het nog een keer. Ga pas daarna naar de volgende oefenopdracht!

## Regen

Schrijf een programma dat op basis van de invoer de gemiddelde hoeveelheid regen berekent over een aantal dagen. De gebruiker mag één of meer dagelijkse hoeveelheden regenval invullen. Als er geen invoer meer is, dan kan de gebruiker `999` intikken om af te sluiten.

> Tip voor het oefententamen: Gebruik een `while`-loop of `do-while`-loop om invoer op te halen tot `999` wordt ingetikt. Tel de totalen meteen op en houd ook bij wat het aantal dagen is.

Het gemiddelde hoeft geen cijfers achter de komma (punt) te hebben en er mag altijd naar beneden worden afgerond. Dat betekent dat je simpelweg de formule `totaal_regen / aantal_dagen` kunt gebruiken.

Implementeer eerst een programma zoals hierboven beschreven. Dit zijn twee voorbeelden van hoe het (correct) werkt:

    $ ./regen
    Hoeveel: 12
    Hoeveel: 12
    Hoeveel: 999
    Gemiddeld 12 millimeter

    $ ./regen
    Hoeveel: 12
    Hoeveel: 6
    Hoeveel: 3
    Hoeveel: 999
    Gemiddeld 7 millimeter

Dit is een voorbeeld waarmee je kunt checken of je de juiste, simpele formule hebt gebruikt die hierboven ook beschreven is. Normaal zou je programma ook hier meteen het juiste antwoord moeten geven:

    $ ./regen
    Hoeveel: 12
    Hoeveel: 11
    Hoeveel: 999
    Gemiddeld 11 millimeter

En tot slot moet je programma een speciale melding geven als bij de eerste input al direct `999` wordt ingevoerd:

    $ ./regen
    Hoeveel: 999
    Dat kan niet
