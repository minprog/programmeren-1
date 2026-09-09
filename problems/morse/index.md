# Morse

Schrijf een programma `morse.c` dat een Morse-code vertaald naar tekst en deze uitprint. Morse-code is een systeem dat door middel van korte en lange signalen informatie overbrengt. Korte signalen worden met een punt (.) aangegeven en lange signalen met een streep (-). Een combinatie van strepen en punten kunnen vervolgens staan voor letters of cijfers. Zo is `...---...` het wel bekende SOS.

Voor deze opdracht definiëren we vier combinaties die staan voor de volgende letters:

- `...` = S
- `---` = O
- `-..` = D
- `.-.` = R

De morse-code wordt niet ingelezen met `get_string`, maar meegegeven als command-line argument. Hiervoor zul je de volgende `main` functie moeten gebruiken:

    int main(int argc, string argv[])

Het programma moet als volgt werken:

    $ ./morse ...---...
    SOS

    $ ./morse -..------.-.
    DOOR

Let op, je mag aannemen dat de gebruiker altijd precies één argument meegeeft: een morse-code waarvan de lengte deelbaar is door 3. Ook mag je aannemen dat de gebruiker enkel streepjes en punten invoert.
