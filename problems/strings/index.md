# Exercises: Strings

Maak een bestand `string_exercises.c` en doe de volgende oefeningen.

## Vertical

Write a program that takes a string from the user and prints each character of the string on a new line. As per the output below:

    $ ./vertical
    Type something: horizontal
    h
    o
    r
    i
    z
    o
    n
    t
    a
    l

### Specification

- Create in a file called `vertical.c`.
- Ask the user for a text input.
- Then, print (with the help of `printf` and a loop) the vertical text.
- Compile the file with the command `make vertical`.

## Skip

Write a program that takes a string from the user and prints each even character of the string. As per the output below:

    $ ./skip
    Type something: Great, gifts!
    Get it!

### Specification

- Create in a file called `skip.c`.
- Ask the user for a text input.
- Then, print (with the help of `printf` and a loop) only the even characters of this string.
- Compile the file with the command `make skip`.

## Eek

Write a program that takes a string from the user and tells you how many e's that string contains. As per the output below:

    $ ./eek
    Type something: Eek a mouse!
    The text "Eek a mouse!" contains 3 e's.

### Specification

- Create a file called `eek.c`.
- Ask the user for a text input.
- Then, count (with the help of a loop and an if statement) the amount of e's in the string.
- Compile the program with the command `make eek`.
- Make sure your program can handle both upper and lower case ‘e'.
- Bonus: I always dislike it when a computer program says something ungrammatical like `The text "one" contains 1 e's.`. Make sure it handles the singular case correctly by saying `The text "one" contains 1 e.`, instead.

## tHe CaSe Of BoB

SpOnGeBoB tAlKs FuNnY, lIkE tHiS:

![](bob.jpg)

Create a program that turns a string into the alternating case of Spongebob.

    $ ./bob
    Type something: Know your meme
    Spongebob says: kNoW yOuR mEmE

### Specification

- Create a file called `bob.c`.
- Create a program that asks for user input and changes it into alternating case. Start with lower case, and make sure to skip spaces and punctuation.
- Compile the program with the command `make bob`.

## emordnilaPalindrome (optional)

Write a program that takes a string from the user and determines if it is a palindrome (a word that is the same spelled backwards). Spaces must be ignored.

    $ ./palindrome
    Type something: Never odd or even
    The text "Never odd or even" is a palindrome

### Specification

- Create a file called `palindrome.c`.
- Compile the program with the command `make palindrome`.
- Make sure your program is not case sensitive.

## Taboo (optional)

Using the word 'cat' is taboo. Write a program that replaces the word 'cat' from the user input to 'dog'. Even better, 'Cat' becomes 'Dog', with casing left intact!

    $ ./taboo
    Type something: The Cheshire Cat is the cat of the Duchess.
    Don't say that, say: The Cheshire Dog is the dog of the Duchess.

### Super more comfortable

If you want to make this exercise even more challenging, write the program in such a way that it does not replace 'cat' if it is part of another word.

    $ ./taboo
    Type something: The catholic cat of Catan works for the syndicate.
    Don't say that, say: The catholic dog of Catan works for the syndicate.

### Specification

- Create a file called `taboo.c`.
- Write a program that takes a string from the user and replaces all instances of 'cat' for 'dog'.
