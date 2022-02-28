# Tentamen

> Regels voor het tentamen:
> 
> - Je mag tot uiterlijk 30 minuten na de begintijd starten.
> - Je moet minimaal tot 30 minuten na de begintijd in de zaal blijven.
> - Leg je collegekaart klaar op tafel (of een andere ID met foto).
> - Leg je telefoon op tafel (zet 'm uit).
> - Zet whatsapp enzo uit op je laptop.
> - Stilte in de zaal.
> - Er is geen pauze, overdrijf niet met drinken, toiletbezoek op verzoek.
> - Klaar is klaar, dan kun je inleveren en weggaan.
> - Voor inleveren steek je je hand op, de surveillant komt controleren voordat je inlevert.

Hieronder vind je vijf opdrachten. Het doel van het tentamen is te demonstreren dat je zelfstandig een oplossing voor een probleem kunt ontwikkelen, en daarbij gebruik kunt maken van de basistechnieken van programmeren, zoals bijvoorbeeld de verschillende soorten loops, if-else-constructies, enzovoort.

Op dit moment in de cursus zou je alle opdrachten goed moeten kunnen maken zonder begeleiding. Door de tijdsbeperking kan het best zijn dat je een opdracht niet kunt maken! Dat hoeft geen probleem te zijn, als maar overtuigend zichtbaar is dat je het programmeren beheerst.

Als bronnen mag je gebruiken:

1. de lecture notes (en de rest van deze website),
2. de CS50 Manual waarin allerlei nuttige C-functies genoemd staan,
3. en je eigen uitwerkingen van eerdere opdrachten.

Verder gebruik van internet of hulp van anderen is niet toegestaan.

In je uitwerking mag je alleen gebruik maken van de library-functies die ook in de CS50 Manual staan (of soortgelijke functies in Python als je het tentamen per se in Python wil doen).

Programmeren moet in de CS50 IDE. Je hebt dus alleen je webbrowser geopend met daarin enkele tabs: de CS50 IDE, de CS50 Manual, en deze cursuswebsite. Je mag geen andere programma's open hebben.

Vanwege het doel van het tentamen heeft het geen zin om alleen het juiste antwoord uit te printen zodat `check50` tevreden is (het zogenaamde "hardcoden").

De input van gebruikers hoeft alleen gecontroleerd te worden als dit duidelijk in de opdracht vermeld staat.

Succes!




## Elektrisch rijden

De aanschaf van een elektrische auto is vaak nog duurder dan een benzineauto, maar de verbruikskosten niet. De benzineprijs is inmiddels gestegen naar 1,95 euro per liter, waarmee je ongeveer 1 op 25 km rijdt. Elektrisch laden kost gemiddeld 30 cent per kilowattuur, waarbij het verbruik ongeveer 1 op 5 km is.

Voor de handigheid hier de formules:

- Het aantal gebruikte liters benzine is `aantal kilometers / 25`
- Het aantal gebruikte kilowattuur is `aantal kilometers / 5`

Schrijf een programma dat bij een gegeven aantal kilometers per maand laat zien hoeveel **goedkoper** elektrisch rijden is t.o.v. de benzineauto (dus het verschil tussen kosten elektrisch en benzine).

    $ ./elektrisch
    Aantal kilometers: 200
    Elektrisch rijden bespaart je 3.6 euro

    $ ./elektrisch
    Aantal kilometers: -2
    Aantal kilometers: 0
    Aantal kilometers: 500
    Elektrisch rijden bespaart je 9.0 euro

## Postzegels

Schrijf een programma dat het aantal benodigde postzegels berekent op basis van de volgende gegevens:

- Gewicht van het poststuk (grammen)
- Volume van het poststuk (dm<sup>3</sup>)
- Land van bestemming (Nederland, Duitsland of Spanje)

De volgende regels gelden:

- Verzending binnen Nederland kost 1 postzegel per 120 gram.
- Verzending naar Duitsland of Spanje kost 2 postzegels per 120 gram.
- Als het volume groter is dan 4 dm<sup>3</sup> dan mag het niet via de normale post verzonden worden.

Gewicht en volume worden ingevoerd als gehele getallen.
Controle op (on)geldige invoer is alleen nodig voor de keuze Nederland, Duitsland of Spanje.

    $ ./postzegels
    Wat is het gewicht? 130
    Wat is het volume? 2
    Wat is de bestemming? N
    Plak 2 postzegel(s).

    $ ./postzegels
    Wat is het gewicht? 300
    Wat is het volume? 2
    Wat is de bestemming? S
    Plak 6 postzegel(s).

    $ ./postzegels
    Wat is het gewicht? 120
    Wat is het volume? 2
    Wat is de bestemming? N
    Plak 1 postzegel(s).

    $ ./postzegels
    Wat is het gewicht? 120
    Wat is het volume? 5
    Wat is de bestemming? N
    Dit kan niet met de post.

    $ ./postzegels
    Wat is het gewicht? 120
    Wat is het volume? 3
    Wat is de bestemming? A
    Wat is de bestemming? B
    Wat is de bestemming? D
    Plak 2 postzegel(s).


## Trapezium

Schrijf een programma dat een trapezium uitprint. De gebruiker mag een hoogte opgeven. Deze hoogte mag niet kleiner dan 5 zijn en niet groter dan 20.

    $ ./trapezium
    Hoe hoog moet het trapezium zijn? 5
        ##########
       #        #
      #        #
     #        #
    ##########

    $ ./trapezium
    Hoe hoog moet het trapezium zijn? 15
                  ##############################
                 #                            #
                #                            #
               #                            #
              #                            #
             #                            #
            #                            #
           #                            #
          #                            #
         #                            #
        #                            #
       #                            #
      #                            #
     #                            #
    ##############################

    $ ./trapezium
    Hoe hoog moet het trapezium zijn? -3
    Hoe hoog moet het trapezium zijn? 40
    Hoe hoog moet het trapezium zijn? 3
    Hoe hoog moet het trapezium zijn? 5
        ##########
       #        #
      #        #
     #        #
    ##########


## Spraaksynthese

Een getal kan worden opgedeeld in cijfer. Het getal 423 bijvoorbeeld, bestaat uit de cijfers 4, 2 en 3. Men wil een spraaksynthesizer gebruiken om getallen uit te spreken, en wel cijfer na cijfer. Het getal 423 moet dus worden uitgesproken als ‘vier’, ‘twee’, ‘drie’.

Schrijf een programma dat een getal cijfer na cijfer, als woord, naar het scherm schrijft zó dat elk woord op een nieuwe regel komt.

Tip: gebruik de functie `get_string()` om invoer te vragen. Gebruik geen `get_int()` of iets dergelijks.

    $ ./synthese
    Getal: 123
    een
    twee
    drie

    $ ./synthese
    Getal: 4210
    vier
    twee
    een
    nul

Als een ongeldige invoer wordt gegeven dan moet er een foutmelding komen:

    $ ./synthese
    Getal: 12o4
    Dat is geen getal!


## Wachtwoorden

Om gebruikers zich te laten registreren wil een website dat de wachtwoorden tenminste 8 tekens (character) lang zijn, 1 kleine letter, 1 grote letter en 1 cijfer bevatten. Schrijf een programma dat checkt of een wachtwoord sterk genoeg is op basis van deze regels en blijft de gebruikers een nieuw wachtwoord vragen totdat die sterk genoeg is.

    $ ./wachtwoord
    Wachtwoord? aaa
    Niet sterk genoeg!
    Wachtwoord? AAA
    Niet sterk genoeg!
    Wachtwoord? aaaaAAAA
    Niet sterk genoeg!
    Wachtwoord? aaaaaaaaa
    Niet sterk genoeg!
    Wachtwoord? AAAAAAAAA
    Niet sterk genoeg!
    Wachtwoord? 000000000
    Niet sterk genoeg!
    Wachtwoord? aaaaAAAAA0000
    Sterk genoeg!

    $ ./wachtwoord
    Wachtwoord? abc0D
    Niet sterk genoeg!
    Wachtwoord? abc0Defg
    Sterk genoeg!
