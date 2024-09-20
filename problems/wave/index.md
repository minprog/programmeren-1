# Wave

Schrijf een programma dat drie transformaties kan doen op een `.wav` audiobestand:

* Volume aanpassen met een factor 0.0 of groter.
* De audio omkeren.
* Een echo effect toevoegen, waarbij de audio met vertraging over de originele audio wordt afgespeeld.

Op [deze pagina](https://docs.fileformat.com/audio/wav/) lees je hoe een `.wav` bestand in elkaar steekt. Let op dat het bestand uit twee delen bestaat:

* Een header van 44 bytes met daarin verschillende informatie over het bestand zoals onder andere: de grootte van het bestand, het aantal samples per seconde en de grootte van iedere sample.
* Deze header wordt gevolgd door een data gedeelte, dit zijn allemaal samples.

## Specificatie

Het programma moet als volgt werken:

    $ ./wave volume input.wav output.wav 2
    $ ./wave reverse input.wav output.wav
    $ ./wave echo input.wav output.wav 0.5
    $ ./wave foo bar
    Usage: ./wave <operation> <input_file> <output_file> <factor>

Het programma neemt als eerste command-line argument de type transformatie, en vervolgens twee command-line argumenten met de locatie van het inputbestand en de locatie van het outputbestand. De volume en echo transformatie nemen nog één extra command-line argument. Dat is respectievelijk de factor waarmee het volume wordt aangepast of de vertraging (delay) in seconden waarmee het echo effect wordt toegepast.

## Demobestanden

Download enkele `.wav` bestanden:

    wget https://raw.githubusercontent.com/minprog/programmeren-1/2024/problems/wave/wave.zip
    unzip wave.zip
    rm wave.zip