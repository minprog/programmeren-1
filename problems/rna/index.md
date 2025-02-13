# RNA

Eiwitsynthese is het proces waarbij eiwitten worden gemaakt op basis van de informatie in het DNA. Simpel gezegd is eiwitsynthese het maken van een eiwit in een menselijke cel. De eerste stap van eiwitsynthese is de transcriptie van DNA naar RNA. (Je hoeft voorgaande niet te begrijpen.)

DNA bestaat uit verschillende moleculen, waaronder 4 nucleotiden die de DNA-code vormen: Adenine (A), Guanine (G), Cytosine (C) en Thymine (T). RNA is een zogenaamde _complementaire_ transcriptie van DNA. De complementaire nucleotide van Adenine is Uracil (U), van Guanine is Cytosine, van Cysotine is Guanine en van Thymine is Adenine.

Een complementaire RNA-keten kan dus volgens een vast patroon beredeneerd worden uit de DNA-keten. Zo geeft een DNA-keten `ATGC` altijd de RNA-keten `UACG` als je bovenstaande regels toepast.

## Opdracht

Schrijf een programma dat een keten van DNA aanneemt van willkeurige lengte en de complementaire RNA-keten print. Het programma print een error message bij ongeldige invoer.

## Implementation Details

- Het programma moet vragen voor een enkele DNA-keten, dit is een `string` van letters.

- Het programma moet niet hoofdlettergevoelig zijn: hoofdletters moeten op dezelfde manier behandeld worden als kleine letters. De output, de RNA-keten, moet in hoofdletters zijn.

- Als een karakter van de DNA keten niet valide is, moet het programma het volgende printen: `Invalid DNA` en de waarde `1` returnen uit `main`.

## Examples

    $ ./rna 
    DNA: ATGC
    UACG

    $ ./rna
    DNA: UUCCAAGGUU

    $ ./rna
    DNA: GCUA

In het geval van gebruikersfouten, moet het programma als volgt reageren en afsluiten met exit code 1.

    $ ./rna
    DNA: AAF
    Invalid DNA