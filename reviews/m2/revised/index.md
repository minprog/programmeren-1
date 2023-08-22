# Review-verslag en verbeteren

Na de code review ga je in een document (.pdf) in jouw eigen woorden en met voorbeelden beschrijven wat er in de code review ter sprake kwam. Wat je gaat aanpassen, wat niet, en waarom dit de code beter maakt.

## Wat kwam er ter sprake?

Beschrijf analytisch en puntsgewijs in `verslag.pdf` de dingen die jullie zijn tegen gekomen tijdens de review: de eigenschappen die vershillen per uitwerking. Enkele voorbeelden:

* Roos gebruikt in iedere loop de variabele namen i & j, Milan gebruikt soms namen als hoogte & stap.

    ![i & hoogte voorbeeld](example1.png){: width="400"}

* Hidde heeft drie keer ongeveer dezelfde regel code onder elkaar. Amy gebruikt op dezelfde plek een loop, maar heeft daardoor wel meer regels code.

    ![drie keer code voorbeeld](example2.png){: width="400"}

* Brenda gebruikt geen haakjes bij kleine if-statements. Tom & Eva hebben juist overal haakjes staan.

    ![if haakjes voorbeeld](example3.png){: width="400"}

## Verbeter je code

Verbeter jouw uitwerking naar eigen smaak. Gebruik de code review als input en ook de feedback van de vorige code review. Probeer vooral je eigen stijl te vinden en neem niet droog de oplossing van een ander over.

Hou ondertussen goed bij wat je aanpast en schrijf alvast kort voor jezelf op waarom je iets doet, of kiest om iets niet te doen. Een goed cijfer is dan ook niet afhankelijk van de keuze van een specifieke stijl, maar wel hoe goed jouw stijl bij de oplossing past en de afwegingen die je maakt.

## Beschrijf je verbeteringen

Schrijf nu het tweede deel van `verslag.pdf`. Schrijf ook hier analytisch. Dat betekent dat je geen verhaal gaat vertellen in de verleden tijd, maar een beschouwing van de verbeteringen die je hebt toegepast.

Beschrijf puntsgewijs de wijzigingen die jij hebt gedaan in jouw code en beredeneer waarom elke wijziging ook een verbetering is. Beschrijf natuurlijk ook de wijzigingen die je definitief *niet* gaat doen: er kan een goede reden zijn om iets te houden zoals het is. Zorg dat je met voldoende diepgang beschrijft waarom jouw code is zoals die is.

Het is gewenst om kleine(!!!!) screenshots van code in te voegen om duidelijk te illustreren waar je het over hebt in het verslag. Klein betekent: geen volledig scherm, alleen een netjes uitgeknipt relevant stukje van de code. Bijvoorbeeld zoals de code voorbeelden bovenin deze tekst.

Bijvoorbeeld:

* Alle controle structuren zoals if, while en for hebben nu haakjes, ook al staat er maar één regel code in. Zo is dit overal consistent en kan ik makkelijk een regel code toevoegen, zonder na te hoeven denken over haakjes. Tijdens het verbeteren van de code wou ik even snel een print statement toevoegen om te debuggen, maar als je dan de haakjes vergeet ben je alleen maar langer bezig. Dat weegt voor mij op tegen de minder regels code.

* De ingewikkelde condities in de if-statements heb ik uitgesplitst en opgeslagen in variabelen. Iedere variabele heeft een begrijpbare naam waardoor het geheel nu ook makkelijker te begrijpen is. Het wordt zo wel veel code zoals bijvoorbeeld hieronder. Voor consistentie heb ik het hier nu ook gedaan, maar ik twijfel of het helpt bij het begrijpen van de code.

    ![ingewikkelde conditie voorbeeld](example4.png){: width="400"}

* De duplicate code heb ik laten staan. Hoewel het nu misschien moeilijker is om de code aan te passen en het is makkelijker om fouten te maken. Maar de code is nu toch echt een makkelijk te begrijpen en een stuk korter dan de code van mijn review partner.

    ![drie keer code voorbeeld](example2.png){: width="400"}

## Inleveren

Lever hieronder de verbeterde uitwerking in, met daarbij een PDF (geen ander formaat) met je verslag. Zet je naam en studentnummer boven het verslag, en ook de naam van het programma dat gereviewed is.

## Beoordeling

De code en het verslag worden beoordeeld met hulp van het volgende schema:

1. ~~uitzonderlijk goede kwaliteit op basis van een doordacht ontwerp~~
2. ~~zeer goede kwaliteit, beperkt ruimte voor verbetering, en scherp beredeneerde keuzes~~
3. degelijke kwaliteit, met ruimte voor verbetering, maar wel goed beredeneerde keuzes
4. net voldoende, erg veel ruimte voor verbetering, maar wel een aantal goed beredeneerde keuzes
5. enige zichtbare aandacht voor kwaliteitsaspecten, of matig beredeneerde keuzes
6. onvoldoende zichtbare aandacht voor kwaliteitsaspecten
{: start="6" reversed=""}

Voor de eerste code review is het maximaal aantal punten 4. Voor latere reviews kan je ook 5 en 6 punten halen. Geen zorgen, het is alleen het hoogste aantal punten dat telt voor het eindcijfer! Haal je voor de eerste code review 3 punten en voor de tweede 4? Dan telt alleen de 4 mee. Het is dus helemaal okee om eens minder te punten te halen.

> **Huh?!** Waarom maximaal 4? Terwijl het vak vordert leer je natuurlijk steeds meer technieken en manieren om code te schrijven, zaken die je in het begin nog niet kan toepassen. Het bleek dan ook niet realistisch om zonder stevige voorkennis hoger dan 4 punten te halen in het begin. Daarnaast zijn de eerdere opdrachten natuurlijk ook kleiner en daar heb je minder kans om goede code te schrijven.