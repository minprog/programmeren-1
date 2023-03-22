# Tentamen: Rechthoeken

Dit is een oefenopdracht voor het tentamen. Probeer 'm in maximaal 30 minuten te maken. Als dat niet lukt, denk dan even goed na welke informatie je mist of wat je nodig hebt om een goed begin te maken. Zoek dat uit en probeer het nog een keer. Ga pas daarna naar de volgende oefenopdracht!

## Rechthoeken

Schrijf een programma dat de afmetingen van twee rechthoeken opvraagt en dan de mogelijkheid geeft om enkele eigenschappen te berekenen. Het gaat om de volgende mogelijkheden:

1. De opppervlakte van de eerste rechthoek (lengte x breedte)
1. De opppervlakte van de tweede rechthoek (lengte x breedte)
1. Het verschil van de oppervlakte van de eerste en tweede rechthoek (opp1 - opp2)
1. De som van de oppervlakte van de eerste en tweede rechthoek (opp1 + opp2)

De lengtes en breedtes moeten ingevoerd worden als een geheel getal.
Controle op (on)geldige invoer is alleen nodig voor de keuze 1, 2, V of S.

    $ ./rechthoeken
    Lengte 1: 45
    Breedte 1: 33
    Lengte 2: 22
    Breedte 2: 12
    Wil je de oppervlakte van rechthoek (1) of (2), of de (S)om of het (V)erschil weten? V
    1221

    $ ./rechthoeken
    Lengte 1: 1
    Breedte 1: 43
    Lengte 2: 39
    Breedte 2: 31
    Wil je de oppervlakte van rechthoek (1) of (2), of de (S)om of het (V)erschil weten? S
    1252

    $ ./rechthoeken
    Lengte 1: 1
    Breedte 1: 43
    Lengte 2: 39
    Breedte 2: 31
    Wil je de oppervlakte van rechthoek (1) of (2), of de (S)om of het (V)erschil weten? 1
    43

    $ ./rechthoeken
    Lengte 1: 1
    Breedte 1: 43
    Lengte 2: 39
    Breedte 2: 31
    Wil je de oppervlakte van rechthoek (1) of (2), of de (S)om of het (V)erschil weten? X
    Dit is geen geldige keuze

    $ ./rechthoeken
    Lengte 1: 1
    Breedte 1: 43
    Lengte 2: 39
    Breedte 2: 31
    Wil je de oppervlakte van rechthoek (1) of (2), of de (S)om of het (V)erschil weten? 0
    Dit is geen geldige keuze

Als geen geldige keuze wordt gemaakt stopt het programma; er wordt niet opnieuw om invoer gevraagd.
