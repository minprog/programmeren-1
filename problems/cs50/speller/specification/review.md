## Analysis

> De analyse van deze opdracht kun je alleen doen, maar het is ook prima om te overleggen met een andere student. Omdat de implementatie wel individueel moet, is het belangrijk dat je je eigen analyse opschrijft en daarmee een goed beeld vormt van wat je gaat bouwen.

Voor de opdracht "Speller" moet je zelf een datastructuur ontwerpen en deze werkend maken in C. Het komt erop neer dat je vastlegt:

1. Hoe de data (woordenlijst) wordt gevormd in het geheugen van de computer
2. Hoe de functies van jouw spellchecker deze structuur kunnen opbouwen en afbreken

Voor de analyse ga je punt 1 uitwerken in een diagram met voorbeelden. Punt 2 ga je ook bestuderen en over nadenken maar je hoeft nog niet in pseudocode te werken.

## Inlezen

Zorg dat je bovenstaande specificatie en ook de bespreking van de aangeleverde code goed hebt doorgenomen. Begrijp je iets niet, bespreek het dan of stel een vraag op Ed!

## Een ontwerp maken

Je ontwerp voor de hash table bestaat uit twee onderdelen.

1. Een schets van hoe de hash table eruit zal zien in verschillende configuraties.

    - Maak een tekening van een hash table gevuld met 5 woorden, waarbij de hashfunctie is "return 0", zoals in de aangeleverde code. Er is dus maar één bucket. Hoe ziet dat er uit met die woorden erin?

    - Maak een tekening van een hash table gevuld met 5 woorden, waarbij de hashfunctie is "return i", waarbij i=0 als de eerste letter van het woord is 'a', i=1 als de eerste letter is 'b', enzovoort.

    Zorg dat in je tekeningen duidelijk wordt:
    
    - Wat er gebeurt als de eerste letter een apostrof is.
    - Wat er gebeurt als er twee woorden met dezelfde eerste letter worden ingevoegd.
    - Welk effect het heeft in welke volgorde de woorden worden ingevoegd.

    Als je tekening niet goed genoeg is, dan maak je 'm opnieuw, tot het helemaal het goede beeld geeft. Je kunt feedback vragen!

2. Een beschrijving van hoe een "node" eruit ziet. Dit is het bouwsteentje van jouw datastructuur. Hoe meer nodes, hoe meer informatie in de structuur past. De vraag is: welke informatie staat opgeslagen in één enkele node? Dat is een belangrijk inzicht. In het videocollege vind je al voorbeelden. Zorg dat jouw definitie van de node consistent is met de structuur die je wil bouwen.

Documenteer beide delen in een PDF (géén Word-document dus, vraag hulp indien nodig!), lever deze in en bespreek met een assistent via Zoom.

## Inleveren

Hieronder kun je de PDF met je ontwerp en voorbeelden insturen.
