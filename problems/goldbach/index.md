# Goldbach

> **Individueel.**
>
> Samenwerken bij deze opdracht is niet toegestaan; het is prima om medestudenten en anderen om hulp te vragen, als het er maar niet op neerkomt dat iemand anders een deel van het werk voor je doet. Voorbeelden van "redelijke" en "onredelijke" manieren van samenwerken vind je in de studiewijzer.

## Het vermoeden van Goldbach

Het vermoeden van Goldbach is een van de oudste onopgeloste problemen in de wiskunde. Goldbach stelde:

_"Elk even getal groter dan 2 kan geschreven worden als de som van twee priemgetallen."_

Een priemgetal mag hierbij ook twee keer gebruikt worden (6=3+3). Hoewel dit vermoeden inderdaad blijkt te kloppen voor alle getallen tot $$4\cdot10^{18}$$ is er nog altijd geen analytisch bewijs voor de stelling. De computer is ongeschikt om het vermoeden te **bewijzen** (je kunt immers niet tot oneindig tellen). Onze enige kans is dus een even getal vinden dat niet aan de eisen voldoet.

## Specificatie

Laat met een programma **goldbach.c** zien dat alle even getallen tot 1000 inderdaad te schrijven zijn als de som van twee priemgetallen. Concreet: laat voor elk even getal ook _expliciet_ zien (op het scherm) dat het te schrijven is als de som van twee priemgetallen:

    4 = 2 + 2
    6 = 3 + 3
    8 = 3 + 5
    10 = 3 + 7
    ...

## Hints

- Bepaal altijd met pen en papier je strategie en ga dus niet gelijk tikken. De 10 minuten die je hieraan besteedt verdien je dik terug tijdens het omzetten naar programmacode.

- Priemgetallen kun je vinden door de getallen vanaf 2 na te lopen en te kijken of ze **geen** deler hebben (groter dan 1 en kleiner dan het getal zelf).

- Je mag in deze opgave geen arrays gebruiken, maar alleen loops, ifs en allerlei variabelen.

- Er wordt flink wat rekenwerk verricht. Je kunt op allerlei manieren je code optimaliseren door precies zoveel werk te doen als nodig is.

- Gebruik geen bestaande algoritmen en geen Google. Dit probleem is zeer goed op te lossen met weinig programmeerkennis maar het moeilijkste deel zit 'm in de analyse.

## How to Test Your Code

Er is géén check50 beschikbaar om je code te checken, omdat het uit bovenstaande zeer duidelijk moet zijn wat de bedoeling is. Bij inleveren wordt je opdracht wel gecheckt op compileerbaarheid. Uiteindelijk zal je mentor de uitvoer van het programma beoordelen op correct/incorrect.

Om te kijken of je programma sneller wordt als je optimalisaties uitvoert, kun je de verwerkingstijd meten (lees de `real` time af in seconden):

    time ./goldbach

En voor de netheid is het altijd goed om even `style50` te gebruiken:

    style50 goldbach.c
