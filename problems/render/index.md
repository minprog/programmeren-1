# Render

We hebben een nieuw systeem voor afbeeldingen bedacht: een array van gehele getallen. Ieder getal geeft aan hoeveel hekjes er op een rij geprint moeten worden. Neem bijvoorbeeld deze getallen:

    1, 3, 5, 1, 1

Dit staat voor de volgende afbeelding:

      #
     ###
    #####
      #
      #

De afbeelding is gecentreerd. De langste rij bepaalt de breedte van de afbeelding en de overige rijen springen in met spaties.

## Quick check

Render "5, 3, 1, 3, 5":

<style>
    table {
        border-collapse: collapse;
    }

    td {
        padding: 0;
        margin: 0;
        width: 1em;
        height: 1em;
    }

    .checkbox {
        appearance: none;
        -webkit-appearance: none;
        width: 1em;
        height: 1em;
        display: inline-block;
        text-align: center;
        vertical-align: middle;
        border: 1px solid #000;
        font-size: 0.8em;
        font-weight: bold;
        cursor: pointer;
        line-height: 1em;
        padding: 0;
    }

    .checkbox:checked::before {
        content: "#";
        display: block;
        text-align: center;
        color: #000;
    }
</style>

<table>
    <tr>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
    </tr>
    <tr>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
    </tr>
    <tr>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
    </tr>
    <tr>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
    </tr>
    <tr>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
        <td><input type="checkbox" class="checkbox" /></td>
    </tr>
</table>


<details markdown="1"><summary markdown="span">De oplossing:</summary>
    
    #####
     ###
      #
     ###
    #####

</details>

## Transformaties

Dit systeem maakt verschillende transformaties makkelijk mogen. In deze opdracht ga je er drie implementeren: stretch, interlace en combine.

* `stretch` rekt de afbeelding op met een meegegeven factor. Zo wordt de afbeelding `1, 3, 5` met een factor `2` uitgerekt tot `2, 6, 10`.

* `interlace` haalt elke tweede rij uit de afbeelding. Zo wordt de afbeelding `1, 3, 5, 7` aangepast naar `1, 0, 5, 0`. Zie <https://en.wikipedia.org/wiki/Interlacing_(bitmaps)> voor meer uitleg over toepassing in afbeeldingen en <https://en.wikipedia.org/wiki/Interlaced_video> voor toepassing in videos.

* `combine` neemt twee afbeeldingen van gelijke hoogte en combineert ze tot één afbeelding. De langste rijen van iedere afbeelding komen in de uiteindelijke afbeelding. Zo worden de afbeeldingen `1, 5, 9` en `5, 3, 1` gecombineerd tot `5, 5, 9`. 

## Implementatie in stappen

Voor deze opdracht ga je een programma schrijven bestaande uit vijf losse functies:

    int max(int numbers[], int n);
    void render(int image[], int height);
    void stretch(int image[], int height, int factor);
    void interlace(int image[], int height);
    void combine(int image1[], int image2[], int height);

Voor deze opdracht hoef je geen `main` functie te schrijven.

### Stap 1: max

Schrijf een functie `max` dat de maximale waarde in een array vindt en returned. Test je eigen functie. Dit kan je doen door een `main` functie toe te voegen aan het programma en daarin jouw functie aan te roepen. Hier kan je de volgende `main` functie kopiëren en plakken:

    int main(void)
    {
        int image1[] = {1, 3, 5, 3, 1};
        int height1 = 5;
        printf("Max of 1, 3, 5, 3, 1 = %d\n", max(image1, height1));

        int image2[] = {3, 2, 1};
        int height2 = 3;
        printf("Max of 3, 2, 1 = %d\n", max(image2, height2));

        int image3[] = {1, 2, 3, 4};
        int height3 = 4;
        printf("Max of 1, 2, 3, 4 = %d\n", max(image3, height3));
    }

### Stap 2: render

Schrijf een functie `render` dat een afbeelding naar de terminal print. Maak hierbij gebruik van de functie `max` om de breedte van de afbeelding te vinden. Test je eigen functie weer door deze aan te roepen in de `main` functie.

> Bevat een afbeelding een combinatie van even en oneven getallen? Rond het aantal spaties dan af naar beneden. Zo levert de afbeelding `1, 2, 3` het volgende op:

     #
    ##
    ###

### Stap 3: stretch

Schrijf een functie `stretch` dat een afbeelding uitrekt met een gegeven factor. Test je eigen functie door deze aan te roepen in de `main` functie.

**Let op!** De functie `stretch` moet niks printen, maar moet juist de meegegeven array aanpassen. Zo zou de volgende code in je main functie één plaatje moeten printen:

    int img[] = {1, 2, 3};
    int n = 3;
    stretch(img, n, 2);
    render(img, n);

### Stap 4: interlace

Schrijf een functie `interlace` dat een afbeelding interlaced. Elke tweede rij wordt `0`. Test je eigen functie door deze aan te roepen in de `main` functie.

**Let op!** De functie `interlace` moet niks printen, maar moet juist de meegegeven array aanpassen.

### Stap 5: combine

Schrijf tot slot een functie `combine` dat twee afbeeldingen van gelijke hoogte samenvoegt tot één. De samengevoegde afbeelding wordt opgeslagen in de eerste afbeelding. De langste rij van iedere afbeelding komt in de samengevoegde afbeelding terecht. Test je eigen functie door deze aan te roepen in de `main` functie.

**Let op!** De functie `combine` moet niks printen, maar moet juist de meegegeven array aanpassen.