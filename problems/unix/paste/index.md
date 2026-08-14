# UNIX: paste

> Maak de opdrachten uit deze module in [CS50's Visual Studio Code](https://cs50.dev)

Schrijf een tool die de inhoud van twee files per regel samenvoegt. Eerst een regel van de ene file, dan een komma, en dan dezelfde regel van de andere file. De namen van beide files worden opgegeven als command-line arguments.

    $ ./paste getallen.txt woorden.txt
    59,aardvark
    8,ampersand
    ...
    34,zombie

De twee files hoeven niet even lang te zijn. Is de ene file langer dan de andere, dan blijft de ontbrekende kant gewoon leeg; de komma wordt nog steeds geprint.

Stel dat `links.txt` de regels `a`, `b` en `c` bevat en `rechts.txt` alleen `d` en `e`:

    $ ./paste links.txt rechts.txt
    a,d
    b,e
    c,

En andersom, als `links.txt` alleen `a` en `b` bevat en `rechts.txt` de regels `d`, `e` en `f`:

    $ ./paste links.txt rechts.txt
    a,d
    b,e
    ,f
