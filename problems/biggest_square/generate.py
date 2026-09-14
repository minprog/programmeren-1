"""
Generates a random map for Biggest Square

Usage: python generate.py <bestand> <breedte> <hoogte> <dichtheid>

The density is the percentage of cells that is an obstacle, from 0 to 100.
Example: python generate.py kaart.txt 60 30 5
"""

import random
import sys


def main():
    if len(sys.argv) != 5:
        sys.exit("Usage: python generate.py <bestand> <breedte> <hoogte> <dichtheid>")

    try:
        width, height, density = int(sys.argv[2]), int(sys.argv[3]), int(sys.argv[4])
    except ValueError:
        sys.exit("breedte, hoogte en dichtheid moeten getallen zijn")

    if width < 1 or height < 1 or not 0 <= density <= 100:
        sys.exit("breedte en hoogte moeten positief zijn, dichtheid tussen 0 en 100")

    with open(sys.argv[1], "w") as f:
        for _ in range(height):
            row = "".join("o" if random.randrange(100) < density else "." for _ in range(width))
            f.write(row + "\n")

    print(f"kaart van {width} bij {height} geschreven naar {sys.argv[1]}")


if __name__ == "__main__":
    main()
