# coupons

Er zijn drie coupons te gebruiken:

1. Drie halen = twee betalen (met andere woorden: iedere derde is gratis)
2. Tweede halve prijs (met andere woorden: 50% korting op iedere tweede)
3. Stapelkorting:
    - 5% korting bij één product
    - 10% korting bij twee producten
    - 20% korting bij drie producten
    - 30% korting bij vier of meer producten

Schrijf een programma `coupons.c` dat eerst vraagt hoeveel producten je wilt kopen. Vervolgens vraagt het programma de prijs per stuk. Daarna print het programma de beste coupon en de totale prijs uit. Het programma moet werken als volgt:

    $ ./coupons
    Hoeveel stuks koop je? 2
    Wat is de prijs per stuk? 5.90
    Met coupon 2 kost het: 8.85

> Schrijf voor iedere coupon een eigen functie, bijvoorbeeld:<br/> `float bereken_coupon1(int aantal_stuks, int prijs)`