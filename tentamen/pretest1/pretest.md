# Pretest 1

Bij het lokale tapas restaurant bestel je een aantal gerechten in bulk. Ieder gerecht kost standaard 5 euro. De prijs verandert afhankelijk van het type gerecht en hoeveel je bestelt:

### Vegetarische gerechten:

* Bij 3 of meer porties: 5% korting op het totaal
* Bij 5 of meer porties: 10% korting op het totaal

### Visgerechten:

Een toeslag van 1.75 euro per portie

* Bij 5 of meer porties, 10% korting op het totaal

### Vleesgerechten:

Een toeslag van X euro per portie:

* 3 euro bij 1 portie
* 2 euro bij 2 porties
* 1 euro bij 3 of meer porties

Schrijf een programma `tapas.c` dat de gebruiker vraagt welk type gerecht ze willen. Daarna vraagt het programma hoeveel porties. Vervolgens print het programma de totale prijs.

Implementeer de volgende drie functies in je programma:

    float bereken_kosten_vegetarisch(int hoeveelheid);
    float bereken_kosten_vis(int hoeveelheid);
    float bereken_kosten_vlees(int hoeveelheid);

### Voorbeelden

    $ ./tapas
    Wat voor type gerecht heb je? (1: vegetarisch, 2: vis, 3: vlees) 2
    Hoeveel porties heb je? 3
    De totale kosten zijn: 20.25

    $ ./tapas
    Wat voor type gerecht heb je? (1: vegetarisch, 2: vis, 3: vlees) 3
    Hoeveel porties heb je? 2
    De totale kosten zijn: 14.00

    $ ./tapas
    Wat voor type gerecht heb je? (1: vegetarisch, 2: vis, 3: vlees) 1
    Hoeveel porties heb je? 4
    De totale kosten zijn: 19.00