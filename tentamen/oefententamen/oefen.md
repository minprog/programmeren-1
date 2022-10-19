# Oefententamen

Regels voor het tentamen:

- Het tentamen vindt plaats op Roeterseiland, maar check altijd je mail 1 dag vooraf.
- Je mag tot uiterlijk 30 minuten na de begintijd starten.
- Je moet minimaal tot 30 minuten na de begintijd in de zaal blijven.
- Leg je collegekaart klaar op tafel (of een andere officiële ID met foto).
- Stilte in de zaal.
- Er is geen pauze, overdrijf niet met drinken, toiletbezoek op verzoek.
- Klaar is klaar, dan kun je inleveren en weggaan.
- Voor inleveren steek je je hand op, de surveillant komt controleren voordat je inlevert.

## Doel van het tentamen

Hieronder vind je vijf opdrachten. Het doel van het tentamen is te demonstreren dat je zelfstandig een oplossing voor een probleem kunt ontwikkelen, en daarbij gebruik kunt maken van de basistechnieken van programmeren, zoals bijvoorbeeld de verschillende soorten loops, if-else-constructies, enzovoort.

Op dit moment in de cursus zou je alle opdrachten goed moeten kunnen maken zonder begeleiding. Maar, door de tijdsbeperking kan het best zijn dat je een opdracht niet kunt maken! Dat hoeft geen probleem te zijn, als maar overtuigend zichtbaar is dat je het programmeren beheerst.

Vanwege het doel van het tentamen heeft het geen zin om alleen het juiste antwoord uit te printen zodat `check50` tevreden is (het zogenaamde "hardcoden").

## Beperkingen

- In je uitwerking mag je alleen gebruik maken van de library-functies die behandeld zijn en wat eventueel in de opdracht vermeld staat. Je mag de documentatie van library-functies opzoeken met hulp van het `man`-commando in de terminal.

- Programmeren moet een code editor en compilen in de terminal. Je mag geen andere programma's open hebben.

- De input van gebruikers hoeft alleen gecontroleerd te worden als dit duidelijk in de opdracht vermeld staat.

- (Ook) voor het oefententamen is het essentieel dat je dit doet zonder gebruik van internet of hulp van anderen. Alleen zo begrijp je waar je zelf nog vastloopt.

## Dit oefententamen

Het oefententamen bevat slechts 3 opdrachten, waar het tentamen er 5 heeft. Het gaat er nu om dat je voldoende oefening hebt om de opdrachten tot een goed einde te brengen.

Heb je nog tentamen-oefeningen uit de werkgroep die je niet 100% correct of af had, dan kun je deze nog afmaken ter voorbereiding:

- <https://prog1.proglab.nl/tentamen/hoofdletters>
- <https://prog1.proglab.nl/tentamen/driehoek>
- <https://prog1.proglab.nl/tentamen/rechthoeken>
- <https://prog1.proglab.nl/tentamen/regen>

Succes!

---

## Vakantie

Je wil in je eentje op vakantie naar een mooie accommodatie in Frankrijk. De kosten van de reis naar het verblijf zijn afhankelijk van het vervoersmiddel. Met het vliegtuig kost het je 250 euro, met de trein kost het 100 euro en met de auto kost het 150 euro. Het verblijf zelf kost 60 euro per nacht. Bovendien betaal je nog 3% servicekosten over de totale kosten, afhankelijk dus van hoeveel nachten je verblijft. De servicekosten worden naar beneden afgerond op hele euro's. Schrijf een programma dat berekent hoeveel je vakantie kost op basis van het aantal dagen dat je op vakantie gaat en met welk vervoersmiddel je gaat.

    $ ./vakantie
    Hoe ga je reizen (v)liegtuig/(t)rein/(a)uto? v
    Hoeveel nachten ga je verblijven? 1
    Jouw vakantie kost: 319

    $ ./vakantie
    Hoe ga je reizen (v)liegtuig/(t)rein/(a)uto? t
    Hoeveel nachten ga je verblijven? 10
    Jouw vakantie kost: 721

    $ ./vakantie
    Hoe ga je reizen (v)liegtuig/(t)rein/(a)uto? a
    Hoeveel nachten ga je verblijven? 7
    Jouw vakantie kost: 587


## Spam

Omdat je emailbox vol stroomt met spam ga je zelf een spamfilter schrijven. Je ontdekt dat spammers vaak woorden als "lottery", "cash" of "money" vervangen voor "lo||ery", "Ca$h" of M0n3y. Tijd om dit op te lossen! Door de verhouding tussen het aantal spaties, hoofdletters, kleine letters overige karakters te meten kan je inschatten of een email wel of geen spam is. Schrijf een programma dat het percentage spaties, hoofdletter, kleine letters en overige karakters in een email print.

Schrijf een programma dat een email als spam of als normale mail classificeert. Een email is spam als het meer dan 10% niet alfabetische karakters bevat. Spaties worden genegeerd en niet meegeteld.

    $ ./spam
    Geef de emailtekst: Ca$hh M0n3y
    Er zijn 30 percent niet alfabetische karakters.
    Deze email is spam.

    $ ./spam
    Geef de emailtekst: Dit was zeker geen spam!
    Er zijn 5 percent niet alfabetische karakters.
    Deze email is normaal.


## Afgebroken

Je hebt een tekst uit de krant gekopiëerd. Alleen er staan nog verdwaalde afbreekstreepjes in de tekst van woorden die niet meer op de regel paste in het oorspronkelijke bericht.  Elk onterecht afbreekstreepje in de originele tekst wordt gevolgd door een spatie. Schrijf een programma dat de tekst print zonder deze streepjes en spaties.

    $ ./afgebroken
    Tekst: Nederlanders worden steeds ouder, vooral door- dat ze na hun 65ste ...
    Nederlanders worden steeds ouder, vooral doordat ze na hun 65ste langer in ...

    $ ./afgebroken    
    Tekst: Over de identiteit van de schutter zegt de po- litie: 'Als het de ...
    Over de identiteit van de schutter zegt de politie: 'Als het de man is die ...

    $ ./afgebroken    
    Tekst: Een 36-jarige Geldropse heeft deze week een in- breker in haar ...
    Een 36-jarige Geldropse heeft deze week een inbreker in haar schuurtje net ...


## Inleveren

Heb je één van de opdrachten niet gedaan? Maak dan een leeg bestand aan met de juiste naam, en gebruik dit om hieronder in te leveren.

Let op dat de website een automatische check doet (**exact** op de input/output die ook hierboven in de voorbeelden staat).
