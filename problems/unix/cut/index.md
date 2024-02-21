# UNIX: cut

Schrijf een tool die van een tekstbestand een gekozen kolom kan uitknippen. Elke regel bevat 1 of meer stukjes data, gescheiden door een komma.

    Rory,+31655551938,rory@hotmail.za
    Wes,+31655551121,w.dubb@google.com
    Tanisha,+31655559831,me@tanisha.nl
    Reuben,+31655554102,reub@gmx.de

De uitvoer voor kolom 2 ziet er zo uit:

    $ ./cut -f2 telefoon.txt
    +31655551938
    +31655551121
    +31655559831
    +31655554102

> Je mag bij deze opdracht aannemen dat een regel maximaal `1000` characters bevat.