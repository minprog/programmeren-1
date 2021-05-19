# Mini-challenges

Deze opdrachten werden vrijwel exact in de onderstaande formulering door eerstejaarsstudenten gedaan in het studiejaar 1998-1999. Als oefening blijven ze actueel!

De eerste opdrachten gaan echt puur om invoer, uitvoer en berekeningen. Gebruik deze opdrachten om te oefenen met het *from Scratch* opzetten van een programma, en doe ze echt op volgorde. In latere opdrachten gaan ook zaken als functies, arrays en structs een rol spelen.

De volgende stappen geven aan hoe je zou moeten werken:

1. Maak het probleem overzichtelijk en kijk:

     - welke gegevens helemaal vast liggen (die wil je waarschijnlijk als constante definiëren)
     - welke gegevens door een gebruiker ingevoerd moeten worden
     - welke gegevens uiteindelijk naar het scherm geprint moeten worden

2. Verzin twee voorbeelden en voorspel wat de uitkomst zou moeten zijn gegeven die voorbeelden. Bestudeer ook alvast **hoe** je tot die antwoorden komt.

3. Doe een voorstel voor de procedure in pseudocode, en besef je welke dingen je nog moet uitzoeken (bv. bij opdracht 1.2 weet je misschien niet meer hoe je een oppervlakte uitrekent gegeven een straal). Doe nader onderzoek en vul je programma aan.

4. Implementeer je programma in C, inclusief code om alle onderdelen goed te testen met voorbeelden.

5. Test je programma uitgebreid met je eerder bedachte voorbeelden en kijk of je "randgevallen" kunt verzinnen waar het programma een onverwachte uitkomst geeft. Maak je programma helemaal af.

### 1.1 Fietsvakantie

Je gaat op fietsvakantie. De kosten van een binnenband bedragen 7 euro, de kosten van een buitenband bedragen 17,50, en het laten plakken van een lek kost 15 euro. Na elke 1000 kilometer fietsen zijn zowel binnen- als buitenband aan vervanging toe. Je neemt niet de makkelijkste route, dus elke 75 kilometer rijd je lek. Schrijf een programma dat de kosten van bandenonderhoud berekent aan de hand van het aantal gereden kilometers (ingevoerd door een gebruiker). Voer zowel de totale kosten als de kosten per post (binnenbanden, buitenbanden en plakken) uit.

### 1.2 Pizza's

Sommige pizzeria's hanteren geen vaste rpijzen voor hun pizza's maar berekenen die aan de hand van de grootte van de pizza en de wensen die de klant heeft met betrekking tot de ingrediënten waarmee de pizza wordt belegd. Voor elke pizza geldt een basisprijs van 3,50. De klant geeft zelf aan hoe groot zijn pizza moet worden en omdat pizza's altijd exact rond zijn wordt dat opgegeven als straal. Bovenop de basiskosten wordt dan één euro per vierkante decimeter in rekening gebracht. De klant kan verder opgeven hoe zijn pizza versierd moet worden en de pizzeria brengt voor elk ingrediënt (kaas, ham, ansjovis, etc.) nog een tien cent per dm2 in rekening. Schrijf een programma dat bij een pizza van de gewenste omvang (de straal van de pizza) en decoratie (het aantal ingrediënten) de prijs uitrekent.

### 1.3 Zwartrijden

Wanneer je vroeger in de trein stapte zonder kaartje betaalde je bij controle door de conducteur een toeslag van 3,50 op de normale ritprijs. Het normale tarief voor de trein bedroeg ongeveer 20 cent per kilometer. Een slimme treinreiziger wil een programma hebben waarbij de kans dat hij gecontroleerd wordt (in procenten) en het aantal kilometers dat zijn treinreis lang is opgegeven kunnen worden, waarna de computer berekent hoeveel deze reiziger betaalt en hoeveel dit procentueel is van het bedrag ddat een reiziger met kaartje moet betalen. Schrijf een programma voor deze slimme treinreiziger.

### 2.1 Babysitten

Babysitten is tegenwoordig een lucratief bijbaantje. Wanneer babies zich koest houden kun je lekker studeren zonder te worden afgeleid, en je krijgt er nog voor betaald ook. Marieke krijgt vóór 12 uur 's nachts een vergoeding van 6 euro per uur en ná middernacht wordt dat 10. De meeste mensen waar ze op de  kleine kinderen past zijn soepel en ronden de tijd dat ze heeft opgepast op een vriendelijke manier af. Voor de tijd van aankomst nemen ze het laatste hele uur voorafgaand aan de werkelijke tijd van aankomst en de tijd van vertrek ronden ze af op het hele uur naar boven toe. Schrijf een programma waarmee Marieke kan uitrekenen wat ze verdienen zal, gegeven een willekeurig begintijdstip (na 7 uur 's avonds) en een willekeurig eindtijdstip (vóór 3 uur 's nachts).

### 2.2 Zwartrijden 2

In Amsterdam kost de gemiddelde tramrit 2,25. Er wordt veel zonder kaartje gereden, dus is de boete aanzienlijk (60 euro plus de normale ritprijs). De pakkans (de kans dat een zwartrijder betrapt wordt) is niet zo groot, mede door de opzichtige kleding en de omvang van de controleteams. Een tramreiziger wil een programma dat de gemiddelde kosten van een ritje met de tram uitrekent (voor iemand die nooit betaalt, tenzij hij gepakt wordt) voor een pakkans van respectievelijk 2, 3, 4 en 5 procent. Het programma moet ook laten zien hoeveel dit bedrag procentueel is van de gemiddelde ritprijs van 2,25.

### 3.1 Temperaturen

Kelvin K en graden Celsius C staan met elkaar in verband via K=273+C. Graden Celsius C en graden Fahrenheit F staan met elkaar in verband via F=(18C + 320)/10. Schrijf een programma dat een nette tabel maakt met drie kolommen, Kelvin, Celsius en Fahrenheit waaruit je de met elkaar corresponderende temperatuurwaarden kunt aflezen. De tabel begin bij 40 graden onder nul, loopt op met stappen van 5 graden en eindigt bij het kookpunt van water bij normale druk (dus 100 graden).

### 3.2 Spraaksynthese

Een getal kan worden opgedeeld in cijfer. Het getal 423 bijvoorbeeld, bestaat uit de cijfers 4, 2 en 3. Men wil een spraaksynthesizer gebruiken om getallen uit te spreken, en wel cijfer na cijfer. Het getal 423 moet dus worden uitgesproken als 'vier', 'twee', 'drie'. Schrijf een programma dat een getal cijfer na cijfer, als woord, naar het scherm schrijft zó dat elk woord op een nieuwe regel komt.

### 3.3 Figuren

Schrijf *functies* die een vierkant en een gevuld vierkant, een ruit en een gevulde ruit, en drie vormen van gevulde driehoeken naar het scherm schrijven. De invoerargumenten van de diverse functies bestaand uit de gewenste afmetingen en kunnen via het toetsenbord worden opgevraagd.

### 4.1 Zeer eenvoudig, maar zeer inefficiënt sorteren

Een methode van sorteren die wel gegarandeerd correct is, maar ongeveer de slechtste die je kunt verzinnen, is *Simple Sort*. Stel dat we een array A met N elementen willen sorteren. We gaan als volgt te werk:

Onderzoek de elementen A[k] vanaf k=1 tot en met k=N-1, en telkens wanneer je een element A[k] tegenkomt dat kleiner is dan A[0] verwissel je dat element met A[0]. Het resultaat daarvan is dat het kleinste element uit het array op de plaats 0 terecht komt.

Over de resterende elementen is niets gegarandeerd, dus moet de procedure nogmaals lopen. Onderzoek nu de elementen A[k] vanaf **k=2** tot en met k=N-1, en telkens wanneer je een element A[k] tegenkomt dat kleiner is dan A[1] verwissel je dat element met A[1]. Het resultaat daarvan is dat het één na kleinste element uit de array op de correcte plaats 1 terecht komt.

Dit proces wordt herhaald voor de posities 3, 4, etc., net zolang totdat alle elementen op hun juiste plaats staan.

Schrijf een functie `void simple_sort_asc(int A[], int N)` die deze sorteermethode implementeert. De tegenhanger van deze functie is `void simple_sort_desc(int A[], int N)` die de boven beschreven sorteermethode implementeert met dit verschil dat de array nu wordt gesorteerd "descending from left to right", ofwel met de getallen in *aflopende* volgorde.

### 5.1 Datums

Schrijf een programma dat bij elke gewenste datum een aantal dagen kan optellen, en dan de nieuwe datum weergeeft. Een deel van de structuur geven we je al.

Dit is de struct waarmee we een type genaamd `Date` definiëren, waarin dag, maand en jaar opgeslagen kunnen worden:

    typedef struct date
    {
        int day, month, year;
    } Date;

Dit is de functie `advance_date` waarmee de dagen worden opgeteld:

    Date advance_date(Date today, int n)[
    {
        int x = n + date_to_num(today);
        return num_to_date(x);
    }

Je ziet dat in deze functie weer twee andere functies worden gebruikt. De functie `date_to_num` kan een datum omzetten naar een simpele integer. Het is gebruikelijk de telling zodanig te starten dat het getal 0 betekent 1 januari 1970 (en het getal 1 is dan 2 januari 1970). De functie `num_to_date` zet zo'n integer dan weer om naar de bijbehorende datum.

Schrijf die functies, en daarbij de het complete programma waarmee een gebruiker een datum kan invoeren en het aantal dagen om er bij op te tellen, waarna de nieuw berekende datum wordt uitgevoerd.

Hint: bedenk dat je `date_to_num` en `num_to_date` ook nog los kan testen, om zeker te zijn dat ze goed werken.

## Dankbetuiging

(Met dank aan Ruud Roël en medewerkers voor deze opdrachten.)
