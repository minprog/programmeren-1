# Runoff zonder loops

Je hebt nu drie functies: `map`, `filter` en `reduce`. Tijd om te kijken wat je ermee kunt. In deze opdracht herschrijf je een eerdere opdracht, [Runoff](/problems/runoff), zónder één loop.

Runoff is hier geknipt voor. Je oplossing bestond uit zes kleine functies, en in elk van die functies liep je met een `for` over de kandidaten of de kiezers. Dat "loopen" is precies wat jouw functies nu van je overnemen. Wat overblijft is alleen nog het *wat*: wat gebeurt er met één kandidaat, met één kiezer?

> Je kunt je eigen uitwerking van Runoff als naslag gebruiken, maar je hoeft er niets van over te nemen. De opdracht, het gedrag en het inleesgedeelte van het programma zijn precies hetzelfde.

## Download

[Get the program template](https://github.com/minprog/programmeren-1/raw/refs/heads/2026/problems/functional/runoff/runoff.c)

Het bestand lijkt sterk op de template van Runoff, met drie verschillen:

* Bovenin staat een gemarkeerd stuk, tussen `// ---- BEGIN: map, filter, reduce ----` en `// ---- END ----`. Plak daar jouw eigen `map`, `filter` en `reduce` uit de vorige opdrachten.
* Naast de zes functies die je kent, zijn er twee nieuwe: `reset_votes` en `print_tied_candidates`. In de oorspronkelijke opdracht zaten er nog loops in `main`. Nu zijn het functies, zodat jij ze loop-vrij kunt maken.
* De rest van `main` is niet veranderd. Het inlezen van de stemmen gebeurt nog steeds met loops: dat hoef je niet aan te passen.

## Opdracht

Implementeer de acht functies uit het bestand, zodat het programma precies doet wat de oorspronkelijke Runoff deed:

* `vote`
* `tabulate`
* `print_winner`
* `find_min`
* `is_tie`
* `eliminate`
* `reset_votes`: zet de stemmen van alle kandidaten terug op 0.
* `print_tied_candidates`: print de namen van alle kandidaten die niet zijn uitgeschakeld, één per regel, in de volgorde van de kandidaten.

Daarbij gelden de volgende regels:

* In deze acht functies staat **geen enkele loop**: geen `for`, `while` of `do`. Het herhalen komt alleen uit `map`, `filter` en `reduce`.
* `map`, `filter` en `reduce` worden allemaal minstens één keer gebruikt.
* Je mag zoveel hulpfuncties en eigen typen toevoegen als je wilt. Een hulpfunctie mag natuurlijk zelf ook `map`, `filter` en `reduce` aanroepen. (Maar een loop in een hulpfunctie is vals spelen!)

## Hints

Je mag zelf bepalen hoe je het aanpakt. Een paar richtingen:

* **Context.** De functie die je aan `map` of `reduce` meegeeft, krijgt geen extra argumenten, behalve de accumulator bij `reduce`. Als je functie meer informatie nodig heeft, bijvoorbeeld de naam waarop je zoekt of het minimum, dan kan dat via de accumulator. Een `struct` met meerdere velden is daar een goede keuze voor. Voor `map` is er geen accumulator: daar kom je misschien uit met een variabele op bestandsniveau (`static`).
* **Welke kandidaat is dit?** In `vote` heb je de plek van de kandidaat nodig die je vindt. Een pointer naar een element van `candidates` min `candidates` zelf, is zijn index.
* **Rijen.** In `tabulate` moet je iets doen voor iedere kiezer. `preferences` is een array van rijen, en een rij is zelf ook een array. Grote kans dat je een combinatie van `map` en `reduce` wil inzetten.
* **Filter bewerkt het origineel.** `filter` werkt ter plekke. Als je dat op `candidates` zou doen, ben je je kandidaten kwijt. Handig om eerst een kopie te maken.

## Testen

Het programma werkt zoals Runoff:

    $ ./runoff Alice Bob Charlie
    Number of voters: 3
    Rank 1: Alice
    Rank 2: Bob
    Rank 3: Charlie

    Rank 1: Alice
    Rank 2: Charlie
    Rank 3: Bob

    Rank 1: Bob
    Rank 2: Alice
    Rank 3: Charlie

    Alice

Je kunt de uitvoer vergelijken met je eigen oorspronkelijke uitwerking van Runoff: voor dezelfde stemmen moet er precies hetzelfde uitkomen.

## Uitdaging

Deze onderdelen worden niet gecontroleerd.

* Een `static` variabele als context is niet fraai. Breid `map` en `reduce` uit met een extra `void *context` parameter die aan de functie wordt doorgegeven, zoals de echte `qsort_r` dat doet. Herschrijf `eliminate` zonder `static`.
* Ook in `main` zitten nog loops. Hoe zou je het inlezen van de stemmen doen? En de `while (true)` waarmee de rondes worden herhaald? Daarvoor heb je een ander soort herhaling nodig: recursie.
