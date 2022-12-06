# Makelaar

De waarde van een huis in een bepaalde wijk is afhankelijk van het aantal vierkante meters. Bovendien maken het aantal badkamers en slaapkamers ook uit voor de prijs.

- Voor wijk 1 is de vierkantemeterprijs voor een woning 5000,-, elke slaapkamer voegt 20000,- euro toe aan de prijs en als de woning meer dan 1 badkamer heeft dan komt er 2% bovenop de totale prijs (vermenigvuldig met 1.02).
- Voor wijk 2 is de vierkantemeterprijs voor een woning 6000,-, elke slaapkamer voegt 10000,- euro toe aan de prijs en het aantal badkamers maakt niet uit.

Schrijf een programma dat de prijs van een woning berekent.

    $ ./makelaar
    Hoeveel vierkante meters heeft de woning? 55
    Hoeveel slaapkamers heeft de woning? 1
    Hoeveel badkamers heeft de woning? 1
    In welke wijk ligt de woning? 1
    De waarde van het huis is EUR 295000,-

    $ ./makelaar
    Hoeveel vierkante meters heeft de woning? 150
    Hoeveel slaapkamers heeft de woning? 3
    Hoeveel badkamers heeft de woning? 3
    In welke wijk ligt de woning? 1
    De waarde van het huis is EUR 826200,-

    $ ./makelaar
    Hoeveel vierkante meters heeft de woning? 150
    Hoeveel slaapkamers heeft de woning? 3
    Hoeveel badkamers heeft de woning? 3
    In welke wijk ligt de woning? 2
    De waarde van het huis is EUR 930000,-

Het bedrag moet precies zo geprint worden als hierboven: een getal bestaande uit een aantal cijfers en dan een komma en een streepje er direct achter.

Als beginpunt kan je deze code gebruiken:

    #include <cs50.h>
    #include <stdio.h>

    int main(int argc, string argv[])
    {
        // TODO
    }
