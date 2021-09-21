# Oefententamen

Hieronder vind je vijf opdrachten van verschillende niveau's. Om het tentamen te halen moet je één werkend programma van het eerste niveau inleveren en twee werkende programma's van het tweede niveau. Je mag verder zelf kiezen welke opdrachten je maakt.

## Kaartje in de trein kopen (niveau 1)

Wanneer je vroeger in de trein stapte zonder kaartje betaalde je bij controle door de conducteur een toeslag van 3,50 op de normale ritprijs. Het normale tarief voor de trein bedroeg ongeveer 20 cent per kilometer. Een creatieve treinreiziger wil een programma hebben waarbij de kans dat hij gecontroleerd wordt (in procenten) en het aantal kilometers dat zijn treinreis lang is opgegeven kunnen worden, waarna de computer berekent hoeveel deze reiziger betaalt en hoeveel dit procentueel is van het bedrag dat een reiziger met kaartje moet betalen. Schrijf dit programma voor deze treinreiziger.

    $ ./trein
    Hoeveel kilometers ga je rijden? 100
    Wat is de kans dat je wordt gecontroleerd in procenten? 50
    Je betaalt gemiddeld 11,75 euro
    Dit is 59% van het normale bedrag

    $ ./trein
    Hoeveel kilometers ga je rijden? 20
    Wat is de kans dat je wordt gecontroleerd in procenten? 75
    Je betaalt gemiddeld 5,63 euro
    Dit is 141% van het normale bedrag


## Babysitten (niveau 1)

Babysitten is tegenwoordig een lucratief bijbaantje. Wanneer babies zich koest houden kun je lekker studeren zonder te worden afgeleid en je krijgt er nog voor betaald ook. Marieke krijgt vóór 12 uur ‘s nachts een vergoeding van 6 euro per uur en ná middernacht wordt dat 10. De mensen waar ze op de kleine kinderen past zijn soepel en ronden de tijd dat ze heeft opgepast op een vriendelijke manier af. Voor de tijd van aankomst nemen ze het laatste hele uur voorafgaand aan de werkelijke tijd van aankomst en de tijd van vertrek ronden ze af op het hele uur naar boven toe. Schrijf een programma waarmee Marieke kan uitrekenen wat ze verdienen zal, gegeven een door de gebruiker ingevoerd begintijdstip (na 7 uur ‘s avonds) en een door de gebruiker ingevoerd eindtijdstip (vóór 3 uur ‘s nachts).

    $ ./babysitten
    Wanneer begon je met babysitten? 1930
    Wanneer was je klaar met babysitten? 0047
    Je verdiende 40 euro

    $ ./babysitten
    Wanneer begon je met babysitten? 2045
    Wanneer was je klaar met babysitten? 0200
    Je verdiende 44 euro


## Tram zonder kaartje (niveau 2)

In Amsterdam kost de gemiddelde tramrit nu 2,25 euro. Omdat er veel zonder kaartje gereden is de boete aanzienlijk. De pakkans (de kans dat een rijder zonder kaartje betrapt wordt) is niet zo groot, mede door de opzichtige kleding en de omvang van de controleteams. De GVB moet ieder jaar een afweging maken tussen de hoogte van de boete en de pakkans. Een te hoge boete wordt onredelijk gevonden en een hoge pakkans betekent ook de inzet van veel controleurs. Om ervoor te zorgen dat er toch kaartjes worden gekocht, moet de pakkans maal de boete boven de gemiddelde ritprijs liggen. Daarom heeft de GVB behoefte aan een programma dat gegeven de hoogte van een boete berekent hoe hoog de pakkans moet zijn in percentages.

    $ ./tram
    Hoe hoog is de boete? 60 euro
    De pakkans moet minimaal 4% zijn.

    $ ./tram
    Hoe hoeg is de boete? 25 euro
    De pakkans moet minimaal 10% zijn.

## Holle driehoek (niveau 2)

## Temperaturen (niveau 2)