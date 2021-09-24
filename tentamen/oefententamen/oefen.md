# Oefententamen

Hieronder vind je vijf opdrachten van verschillende niveaus. Om het tentamen te halen moet je één werkend programma van het eerste niveau inleveren en twee werkende programma's van het tweede niveau. Je mag verder zelf kiezen welke opdrachten je maakt.

## Kaartje in de trein kopen (niveau 1)

Wanneer je vroeger in de trein stapte zonder kaartje betaalde je bij controle door de conducteur een toeslag van 3,50 op de normale ritprijs. Het normale tarief voor de trein bedroeg ongeveer 20 cent per kilometer. Een creatieve treinreiziger wil een programma hebben waarbij de kans dat hij gecontroleerd wordt (in procenten) en het aantal kilometers dat zijn treinreis lang is opgegeven kunnen worden, waarna de computer berekent hoeveel deze reiziger betaalt en hoeveel dit procentueel is van het bedrag dat een reiziger met kaartje moet betalen. Schrijf dit programma voor deze treinreiziger.

    $ ./trein
    Hoeveel kilometers ga je rijden? 100
    Wat is de kans dat je wordt gecontroleerd in procenten? 50
    Je betaalt gemiddeld 11.75 euro
    Dit is 59 procent van het normale bedrag

    $ ./trein
    Hoeveel kilometers ga je rijden? 20
    Wat is de kans dat je wordt gecontroleerd in procenten? 75
    Je betaalt gemiddeld 5.63 euro
    Dit is 141 procent van het normale bedrag

> Let op, alle getallen moeten goed op halven worden afgerond en euro's mogen niet meer dan twee decimalen na de komma worden geprint.



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
    Hoe hoog is de boete? 60
    De pakkans moet minimaal 4 procent zijn.

    $ ./tram
    Hoe hoeg is de boete? 25
    De pakkans moet minimaal 10 procent zijn.


## Holle driehoek (niveau 2)

Schrijf een programma dat een holle driehoek uitprint. De gebruiker mag een hoogte opgeven. Deze hoogte mag niet kleiner dan 5 zijn en niet hoger dan 15.

    $ ./driehoek
    Hoe hoog moet de driehoek zijn? 5
        ##
       #  #
      #    #
     #      #
    ##########

    $ ./driehoek
    Hoe hoog moet de driehoek zijn? 15
                  ##
                 #  #
                #    #
               #      #
              #        #
             #          #
            #            #
           #              #
          #                #
         #                  #
        #                    #
       #                      #
      #                        #
     #                          #
    ##############################


## Temperaturen (niveau 2)

Graden Celsius C en graden Fahrenheit F staan met elkaar in verband via `F = (18C + 320) / 10` en andersom `C = (10F - 320) / 18`. Schrijf een programma dat de gebruiker vraagt om de maat van temperatuur, of C van Celsius of F van Fahrenheit. Vervolgens vraagt het programma om de begintemperatuur, de eindtemperatuur en de stapsgrootte. Waarna een nette tabel wordt uitgeprint met op iedere rij de gekozen temperatuur en de temperatuur in de andere maat.

Vraag de gebruiker opnieuw om input als er iets anders dan C of F wordt gekozen voor de maat van temperatuur. Vraag de gebruiker ook opnieuw om input als er een stapgrootte kleiner dan 1 wordt ingevuld. 

    $ ./temperaturen
    Welke maat van temperatuur (C of F)? C
    Wat is de begintemperatuur? 0
    Wat is de eindtemperatuur? 20
    Wat is de stapgrootte? 5
      C |   F
      0 |  32
      5 |  41
     10 |  50
     15 |  59
     20 |  68

    $ ./temperaturen
    Welke maat van temperatuur (C of F)? F
    Wat is de begintemperatuur? 0
    Wat is de eindtemperatuur? 10
    Wat is de stapgrootte? 2
      F |   C
      0 | -17
      2 | -16
      4 | -15
      6 | -14
      8 | -13
     10 | -12

    $ ./temperaturen 
    Welke maat van temperatuur (C of F)? F
    Wat is de begintemperatuur? 100
    Wat is de eindtemperatuur? 0
    Wat is de stapgrootte? 3
      F |   C

     $ ./temperaturen 
    Welke maat van temperatuur (C of F)? c
    Welke maat van temperatuur (C of F)? v
    Welke maat van temperatuur (C of F)? F
    Wat is de begintemperatuur? 0
    Wat is de eindtemperatuur? 9
    Wat is de stapgrootte? -3
    Wat is de stapgrootte? 0
    Wat is de stapgrootte? 3
      F |   C
      0 | -17
      3 | -16
      6 | -14
      9 | -12

> Tip: zo print je een waarde uit met een vaste lengte `printf("%3d", getal)`. Is `getal` hier bijvoorbeeld `9`, dan worden er twee spaties uitgeprint voor de `9` om zo toch de opgegeven lengte 3 te krijgen.