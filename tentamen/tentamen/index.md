# Tentamen

*Fulltime Programmeren 1, 28 september 2021, 13:00--17:00 uur.*

Hieronder vind je vijf opdrachten van verschillende niveaus. Om het tentamen te halen moet je minimaal één goedwerkend programma van het eerste niveau inleveren en twee goedwerkende programma's van het tweede niveau.

Het doel is te demonstreren dat je zelfstandig een oplossing voor een probleem kunt ontwikkelen, en daarbij gebruik kunt maken van de basistechnieken van programmeren in C, zoals bijvoorbeeld de verschillende soorten loops, if-else-constructies, enzovoort.

Vanwege dit doel heeft het geen zin om alleen het juiste antwoord uit te printen zodat `check50` tevreden is (het zogenaamde "hardcoden"). Het is daarom ook aan te raden om zoveel mogelijk van de opdrachten te doen, mits de tijd dit toelaat. Dat geeft ruimte als je onbedoeld een antwoord hebt ge-hardcode.

De input van gebruikers hoeft alleen gecontroleerd te worden als dit duidelijk in de opdracht vermeld staat.

> Als bronnen mag je gebruiken: de lecture notes (en de rest van de website), de CS50 Manual waarin allerlei nuttige C-functies genoemd staan, en je eigen uitwerkingen van andere opdrachten. Je mag geen andere bronnen gebruiken en niet op één of andere manier met iemand anders communiceren over de opgaven tijdens het maken van het tentamen.

## Vakantie (niveau 1)

Je wil in je eentje op vakantie naar een mooie accommodatie in Frankrijk. De kosten van de reis naar het verblijf zijn afhankelijk van het gebruikte vervoersmiddel. Met het vliegtuig kost het je 250 euro, met de trein kost het 100 euro, en met de auto kost het 150 euro. Het verblijf zelf kost 60 euro per nacht. Bovendien betaal je nog 3% servicekosten over de totale kosten (dus vermenigvuldig totaal met 0.03), afhankelijk dus van hoeveel nachten je verblijft. De servicekosten worden wel naar **beneden** afgerond op hele euro's vóórdat ze bij het totaalbedrag worden opgeteld!

Schrijf een programma dat berekent hoeveel je vakantie kost op basis van het aantal dagen dat je op vakantie gaat en met welk vervoersmiddel je gaat. Controle op (on)geldigde invoer is niet nodig.

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


## Caffeïne (niveau 1)

Het internationale advies voor de maximale dagelijkse caffeïne-intake is 400mg voor een gezonde volwassene, 100mg voor iemand tussen 12 en 18 jaar oud, en helemaal geen caffeïne voor kinderen onder 12 jaar oud.

Hierbij een lijst met de hoeveelheid caffeïne voor één portie van verschillende dranken.

* Coffee - 90 mg
* Thee - 45 mg
* Energiedrankjes - 80 mg
* Cola - 40 mg

Schrijf een programma dat de caffeïne-inname van de gebruiker berekent en een waarschuwing print als deze te hoog is. Controle op (on)geldige invoer is niet nodig.

    $ ./caffeine 
    Hoeveel koppen koffie? 2
    Hoeveel koppen thee? 1
    Hoeveel energiedrankjes? 0
    Hoeveel glazen cola? 0
    Hoeveel jaar oud ben je? 22
    Je krijgt 225 mg caffeïne binnen.
    Dat is een veilige hoeveelheid caffeïne.

    $ ./caffeine 
    Hoeveel koppen koffie? 2
    Hoeveel koppen thee? 0
    Hoeveel energiedrankjes? 2
    Hoeveel glazen cola? 0
    Hoeveel jaar oud ben je? 17
    Je krijgt 340 mg caffeïne binnen.
    Kijk uit, dat is te veel caffeïne!

    $ ./caffeine 
    Hoeveel koppen koffie? 0
    Hoeveel koppen thee? 0
    Hoeveel energiedrankjes? 0
    Hoeveel glazen cola? 1
    Hoeveel jaar oud ben je? 10
    Je krijgt 40 mg caffeïne binnen.
    Kijk uit, dat is te veel caffeïne!

    $ ./caffeine 
    Hoeveel koppen koffie? 5
    Hoeveel koppen thee? 0
    Hoeveel energiedrankjes? 0
    Hoeveel glazen cola? 0
    Hoeveel jaar oud ben je? 38
    Je krijgt 450 mg caffeïne binnen.
    Kijk uit, dat is te veel caffeïne!


## RNA (niveau 2)

Eiwitsynthese is het proces waarbij eiwitten worden gemaakt op basis van de informatie in het DNA. Simpel gezegd is eiwitsynthese het maken van een eiwit in een menselijke cel. De eerste stap van eiwitsynthese is de transcriptie van DNA naar RNA. (Je hoeft voorgaande niet te begrijpen.)

DNA bestaat uit verschillende moleculen, waaronder 4 nucleotiden die de DNA-code vormen: Adenine (A), Guanine (G), Cytosine (C) en Thymine (T). RNA is een zogenaamde *complementaire* transcriptie van DNA. De complementaire nucleotide van Adenine is Uracil (U), van Guanine is Cytosine, van Cysotine is Guanine en van Thymine is Adenine.

Een complementaire RNA-keten kan dus volgens een vast patroon beredeneerd worden uit de DNA-keten. Zo geeft een DNA-keten `ATGC` altijd de RNA-keten `UACG` als je bovenstaande regels toepast.

Schrijf een programma dat een keten van DNA aanneemt en de complementaire RNA-keten print. Je mag aannemen dat de DNA-keten altijd in hoofdletters wordt ingevuld. Het programma print een error message als deze een ongeldige nucleotide bevat (dus een andere letter dan A, G, C of T).

    $ ./rna
    DNA-keten: ATGC
    Dit is de bijbehorende RNA-keten: UACG

    $ ./rna
    DNA-keten: AAF
    Ongeldige DNA-keten

    $ ./rna
    DNA-keten: AAGGTTCCAA
    Dit is de bijbehorende RNA-keten: UUCCAAGGUU


## Spam (niveau 2)

Omdat je emailbox volstroomt met spam ga je zelf een spamfilter schrijven. Je ontdekt dat spammers vaak woorden als "lottery", "cash" of "money" vervangen voor "lo\|\|ery", "Ca$h" of M0n3y. Tijd om dit op te lossen! Door de verhouding tussen het aantal hoofdletters, kleine letters overige tekens te meten kan je inschatten of een email wel of geen spam is. Een tekst is spam als deze meer dan 10% niet-alfabetische tekens bevat. Spaties worden hierbij genegeerd en **niet** meegeteld.

Schrijf een programma dat:

- eerst het percentage niet-alfabetische tekens in een tekst print, dus  
    `aantal niet-alfabetisch / (aantal alfabetisch + aantal niet-alfabetisch) * 100`
- daarna een tekst als spam of als normale mail classificeert

Voorbeelden:

    $ ./spam
    Geef de emailtekst: Ca$hh M0n3y
    30 percent niet-alfabetische tekens.
    Deze email is spam.

    $ ./spam
    Geef de emailtekst: Dit was zeker geen spam!
    5 percent niet-alfabetische tekens.
    Deze email is normaal.


## X-factor (niveau 2)

Je bent jurylid bij het talentenprogramma X-factor. De huidige kandidaat heeft maar weinig talent, dus je wil op de knop drukken en de grote rode 'X' laten oplichten. Maar helaas, de knop doet het niet! Je besluit dat het enige wat je nu kan doen is een programma in C schrijven dat een kruis uitprint.

De gebruiker mag aangeven hoe hoog het kruis moet zijn. Je mag er vanuit gaan (dus je hoeft niet te checken) dat dit altijd een positief oneven getal is. Vervolgens print het programma een kruis in een grid zoals de voorbeelden hieronder. Tussen ieder vakje in het grid staat een punt (`.`).

**Tip.** Deel het kruis op in drie delen voor het maken van je algoritme: een bovenste deel waarin steeds twee keer een `X` staat, die steeds dichter bij elkaar komen; een middelste regel met één `X`, en dan het onderste deel waarin weer twee `X` per regel staan.

    $ ./kruis
    Hoe hoog moet het kruis zijn? 9
    .X. . . . . . . .X.
    . .X. . . . . .X. .
    . . .X. . . .X. . .
    . . . .X. .X. . . .
    . . . . .X. . . . .
    . . . .X. .X. . . .
    . . .X. . . .X. . .
    . .X. . . . . .X. .
    .X. . . . . . . .X.

    $ ./kruis
    Hoe hoog moet het kruis zijn? 5
    .X. . . .X.
    . .X. .X. .
    . . .X. . .
    . .X. .X. .
    .X. . . .X.

    $ ./kruis
    Hoe hoog moet het kruis zijn? 3
    .X. .X.
    . .X. .
    .X. .X.
