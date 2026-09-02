# Pretest 2

Bij de atletiekvereniging houden ze het hoogspringen bij. Iedere sprong wordt opgemeten, en de vereniging wil weten wanneer er een record gesprongen wordt.

Schrijf een programma `record.c` dat eerst vraagt hoeveel sprongen er gedaan zijn. Daarna vraagt het programma net zo vaak om de hoogte van een sprong (een heel getal, in centimeters).

Na iedere sprong print het programma of het een record was:

* `Record!` als de sprong hoger is dan alle sprongen daarvoor
* `Geen record` als dat niet zo is

De allereerste sprong is altijd een record. Een sprong die precies even hoog is als het huidige record, is geen record: hij moet er echt overheen.

Als alle sprongen gemaakt zijn, print het programma de hoogste sprong.

### Voorbeelden

    $ ./record
    Hoeveel sprongen? 3
    Hoogte: 120
    Record!
    Hoogte: 115
    Geen record
    Hoogte: 140
    Record!
    Hoogste sprong: 140

    $ ./record
    Hoeveel sprongen? 4
    Hoogte: 90
    Record!
    Hoogte: 105
    Record!
    Hoogte: 105
    Geen record
    Hoogte: 100
    Geen record
    Hoogste sprong: 105

    $ ./record
    Hoeveel sprongen? 1
    Hoogte: 133
    Record!
    Hoogste sprong: 133

Als er geen enkele sprong gedaan is, dan is er ook geen hoogste sprong. Het programma geeft dan een speciale melding:

    $ ./record
    Hoeveel sprongen? 0
    Geen sprongen

