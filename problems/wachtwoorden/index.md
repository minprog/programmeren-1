# Wachtwoord

Om gebruikers zich te laten registreren wil een website dat de wachtwoorden tenminste 8 tekens (characters) lang zijn, en nooit twee dezelfde tekens direct achter elkaar bevat.Schrijf een programma `wachtwoord.c` dat checkt of een wachtwoord “sterk genoeg” is op basis van deze regels. Het programma blijft om een nieuw wachtwoord vragen tot het sterk genoeg is.

    $ ./wachtwoord
    Wachtwoord? geheim
    Niet sterk genoeg!
    Wachtwoord? aardbei121
    Niet sterk genoeg!
    Wachtwoord? roomboter
    Niet sterk genoeg!
    Wachtwoord? kruipluik291
    Sterk genoeg!

    $ ./wachtwoord
    Wachtwoord? geheim
    Niet sterk genoeg!
    Wachtwoord? kruipluik
    Sterk genoeg!

    $ ./wachtwoord
    Wachtwoord? mamamama
    Sterk genoeg!

Als beginpunt kun je deze code gebruiken:

    #include <cs50.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    
    int main(void)
    {
        // TODO
    }