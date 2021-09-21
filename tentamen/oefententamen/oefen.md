# Oefententamen

Hieronder vind je vijf opdrachten van verschillende niveau's. Om het tentamen te halen moet je één werkend programma van het eerste niveau inleveren en twee werkende programma's van het tweede niveau. Je mag verder zelf kiezen welke opdrachten je maakt.

## Rijden zonder kaartje (niveau 1)

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