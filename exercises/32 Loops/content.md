# Exercises: Loops

Toets E is wat anders dan je gewend bent. In deze toets ga je zelf algoritmes schrijven. Hier kan je laten zien wat je geleerd hebt van de programmeeropdrachten die je tot nu toe hebt gemaakt.

Dit onderwerp kan je niet met het basisboek voorbereiden. Algoritmes schrijven leer je vooral door het te doen. Het is dus belangrijk is om nog eens goed te kijken naar de opdrachten die je tot nu toe gemaakt hebt en nog eens te oefenen met bepaalde aspecten.

> De antwoorden op het toetsje moet je schrijven als C-code. Hierbij hoef je niet op de puntkomma's te letten, maar het moet ook geen pseudocode zijn. Soms is het ook nodig om C-specifieke functies te gebruiken zoals `strlen()`. Schrijf dus zo netjes mogelijk C.

De onderwerpen die aan bod zullen komen:  

## Loops

* do-while: Kijk hiervoor nog eens naar de [input validatie](https://prog1.mprog.nl/problems/mario-less#specification) die je in Mario nodig had.
* for: Kijk nog eens hoe je een blok van hekjes ([mario block](https://prog1.mprog.nl/problems/mario-less#block)) en een pyramide  ([mario left pyramid](Mario-less)) hebt gemaakt.

### Oefeningen

Schrijf een loop die de variabele `n` vult met invoer van de gebruiker (\`get_int()\`). De ingevoerde waarde moet negatief zijn.

`int n;`

Print een mario-pyramide van hoogte `h`.

`int h;`

## Strings

* strings: Oefen nog een keer met het doorlopen en selectief printen van strings zoals in [initials](https://prog1.mprog.nl/problems/initials-less). 
* ascii: Zorg ervoor dat je weet hoe je ascii waardes kan manipuleren zoals in [Caesar](https://prog1.mprog.nl/problems/caesar). Het zal zeker niet zo complex worden als caesar en je hoeft ook zeker niet de ascii-tabel uit je hoofd te kennen, maar je moet wel eenvoudige op ascii gebaseerde conversies kunnen doen.

### Oefeningen

Schrijf een loop die van alle woorden in de string `tale` de laatste letter uitprint.

```
string tale = "It was the best of times";
```

Schrijf een loop die van de string `bob` de hoofdletters uitprint.

```
string bob = "pRoGgRaMmInG In c";
```

Print de string `knight`, maar vervang daarbij alle letters 'a' door een 'o'.

```
string knight = "Batman";
```

## Arrays

* arrays: In de opdracht find heb je het binary search geïmplementeerd. Dat algoritme zal je niet hoeven te reproduceren op de test, maar je kan wel simpelere varianten verwachten, zoals linear search (zie het [college](https://prog1.mprog.nl/lectures/algorithms#searching)). 

### Oefeningen

Schrijf een loop die in de array `numbers` zoekt of het getal `3` voorkomt. dat in het is besproken (de lengte van de array is gegeven door `length`).

```
int numbers[] = {7, 3, 4, 5};
int length = 4;
```

Schrijf een loop die het gemiddelde berekent van de getallen in array `numbers` en opslaat in de variabele `avg`.

```
int numbers[] = {5, 7, 2, 4, 6};
int length = 5;
int avg;
```

Op papier een algoritme uitwerken is echt een andere oefening dan hetzelfde doen op een computer. Je kan niet tussendoor uitproberen of het werkt. Oefen dus goed met de bovenstaande onderwerpen voor je de toets gaat maken.
