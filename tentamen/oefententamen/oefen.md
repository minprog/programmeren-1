# Oefententamen

Regels voor het tentamen:

- Het tentamen vindt plaats op Science Park, zie datanose.nl voor je persoonlijke rooster.
- Je mag tot uiterlijk 30 minuten na de begintijd starten.
- Je moet minimaal tot 30 minuten na de begintijd in de zaal blijven.
- Leg je collegekaart klaar op tafel (of een andere officiële ID met foto).
- Stilte in de zaal.
- Er is geen pauze, overdrijf niet met drinken, toiletbezoek op verzoek.
- Wifi is uit tijdens het tentamen, geen andere dingen in scherm dan editor en terminal.
- Alleen man pages zijn toegestaan als documentatie.
- Klaar is klaar, dan kun je inleveren en weggaan.
- Voor inleveren steek je je hand op, de surveillant komt controleren voordat je inlevert.

## Doel van het tentamen

Hieronder vind je vijf opdrachten. Het doel van het tentamen is te demonstreren dat je zelfstandig een oplossing voor een probleem kunt ontwikkelen, en daarbij gebruik kunt maken van de basistechnieken van programmeren, zoals bijvoorbeeld de verschillende soorten loops, if-else-constructies, enzovoort.

Op dit moment in de cursus zou je alle opdrachten goed moeten kunnen maken zonder begeleiding. Maar, door de tijdsbeperking kan het best zijn dat je een opdracht niet kunt maken! Dat hoeft geen probleem te zijn, als maar overtuigend zichtbaar is dat je het programmeren beheerst.

Vanwege het doel van het tentamen heeft het geen zin om alleen het juiste antwoord uit te printen zodat `check50` tevreden is (het zogenaamde "hardcoden").

## Waar we naar op zoek zijn

Je kunt in je uitwerking laten zien dat je:

- Kleine programmeerproblemen in beperkte tijd kunt oplossen
- De basisconstructies if, else, for, while en dergelijke beheerst
- Om kunt gaan met command-line arguments
- Begrijpt hoe je variabelen kunt inzetten om antwoorden te verzamelen, uit te rekenen
- Kunt werken met strings en characters, en met arrays
- Zorgvuldig de output kunt construeren met print statements
- Meerdere functies kunt definiëren die elk een deel van de oplossing geven
- Nette code kunt schrijven met relevante documentatie

## Beperkingen

- In je uitwerking mag je alleen gebruik maken van de library-functies die behandeld zijn en wat eventueel in de opdracht vermeld staat. Je mag de documentatie van library-functies opzoeken met hulp van het `man`-commando in de terminal.
- Programmeren moet in een code editor en compilen in de terminal. Je mag geen andere programma's open hebben.
- De input van gebruikers hoeft alleen gecontroleerd te worden als dit duidelijk in de opdracht vermeld staat.
- (Ook) voor het oefententamen is het essentieel dat je deze maakt zonder gebruik van internet of hulp van anderen. Alleen zo begrijp je waar je zelf nog vastloopt.

## Extra oefenopdrachten

Als je onderstaand oefententamen hebt gedaan, dan kun je ook nog oefenen met onderstaande losse opdrachten:

- [Hoofdletters](/tentamen/hoofdletters)
- [Driehoek](/tentamen/driehoek)
- [Rechthoeken](/tentamen/rechthoeken)
- [Regen](/tentamen/regen>)

## Dit oefententamen

Het oefententamen bevat slechts 3 opdrachten, waar het tentamen er 5 heeft. Het gaat er nu om dat je voldoende oefening hebt om de opdrachten tot een goed einde te brengen.

Succes!

---

## Leestijd

Laten we er vanuit gaan dat je 250 woorden per minuut leest en dat een pagina van een boek gemiddeld 300 woorden bevat. Schrijf een programma dat het totaal aantal gelezen pagina's berekent, gegeven het aantal gelezen minuten. De gebruiker mag één of meer gelezen minuten invoeren. Als er geen invoer meer is, dan kan de gebruiker -1 intikken om af te sluiten. Rond af op hele pagina's. Voor het afronden kan je de `round` functie gebruiken.

Gebruik indien nodig `man round`.

Controle op (on)geldige invoer is niet nodig.

    $ ./leestijd
    Hoeveel minuten heb je gelezen? 35
    Hoeveel minuten heb je gelezen? 50
    Hoeveel minuten heb je gelezen? 10
    Hoeveel minuten heb je gelezen? 15
    Hoeveel minuten heb je gelezen? -1
    Je hebt ongeveer 92 pagina's gelezen.

    $ ./leestijd
    Hoeveel minuten heb je gelezen? -1
    Je hebt niet gelezen.

## Spam

Omdat je emailbox vol stroomt met spam ga je zelf een spamfilter schrijven. Je ontdekt dat spammers vaak woorden als "lottery", "cash" of "money" vervangen voor "lo\|\|ery", "Ca$h" of M0n3y. Tijd om dit op te lossen! Door de verhouding tussen het aantal spaties, hoofdletters, kleine letters overige karakters te meten kan je inschatten of een email wel of geen spam is (nou ja, min of meer).

Schrijf een programma dat een email als spam of als normale mail classificeert. Een email is spam als het meer dan 10% niet alfabetische karakters bevat. Zorg dat je het percentage netjes afrondt. Daarvoor kan je de `round` functie gebruiken. Spaties worden genegeerd en niet meegeteld.

Gebruik indien nodig `man round`.

    $ ./spam CaZhh M0n3y
    Er zijn 20 percent niet alfabetische karakters.
    Deze email is spam.

    $ ./spam Dit was zeker geen spam!
    Er zijn 5 percent niet alfabetische karakters.
    Deze email is normaal.

    $ ./spam
    Usage: ./spam text...

## Afgebroken

Je hebt een tekst uit de krant gekopiëerd. Alleen er staan nog verdwaalde afbreekstreepjes in de tekst van woorden die niet meer op de regel paste in het oorspronkelijke bericht. Elk onterecht afbreekstreepje in de originele tekst wordt gevolgd door een spatie. Schrijf een programma dat de tekst print zonder deze streepjes en spaties. Als geen tekst wordt ingevoerd moet opnieuw worden gevraagd.

    $ ./afgebroken
    Tekst: Nederlanders worden steeds ouder, vooral door- dat ze na hun 65ste ...
    Nederlanders worden steeds ouder, vooral doordat ze na hun 65ste langer in ...

    $ ./afgebroken
    Tekst: Over de identiteit van de schutter zegt de po- litie: 'Als het de ...
    Over de identiteit van de schutter zegt de politie: 'Als het de man is die ...

    $ ./afgebroken
    Tekst: 
    Tekst: Een 36-jarige Geldropse heeft deze week een in- breker in haar ...
    Een 36-jarige Geldropse heeft deze week een inbreker in haar schuurtje net ...

## Inleveren

Heb je één van de opdrachten niet gedaan? Maak dan een leeg bestand aan met de juiste naam, en gebruik dit om hieronder in te leveren.

Let op dat de website een automatische check doet (**exact** op de input/output die ook hierboven in de voorbeelden staat).
