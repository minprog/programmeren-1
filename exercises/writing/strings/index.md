# Exercises: Strings

## Getting started

Create a new directory this assignment:

    mkdir -p ~/exercises/strings

Now, step into this directory:

    cd ~/exercises/strings


## Vertical

Write a program that takes a string from the user and prints each character of the string on a new line. As per the output below (where the underlined text is the user input):

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

- Create in a file called `vertical.c` in your `~/exercises/strings` directory.
- Ask the user for a text input.
- Then, print (with the help of `printf` and a loop) the vertical text.
- Compile the file with the command `make vertical`.


## Skip

Write a program that takes a string from the user and prints each even character of the string. As per the output below (where the underlined text is the user input):


    $ ./skip
    Type something: Great, gifts!
    Get it!


### Specification

- Create in a file called `skip.c` in your `~/exercises/strings` directory.
- Ask the user for a text input.
- Then, print (with the help of `printf` and a loop) only the even characters of this string.
- Compile the file with the command `make skip`.


## Eek

Write a program that takes a string from the user and tells you how many e's that string contains.. As per the output below (where the underlined text is the user input):


    $ ./eek
    Type something: Eek a mouse!
    The text "Eek a mouse!" contains 3 e's.


### Specification

- Create a file called `eek.c` in your `~/exercises/strings` directory.
- Ask the user for a text input.
- Then, count (with the help of a loop and an if statement) the amount of e's in the string.
- Compile the program with the command `make eek`.
- Make sure your program can handle both upper and lower case ‘e'.
- Bonus: I always dislike it when a computer program says something ungrammatical like `The text` `"``one``"` `contains 1 e``'``s.`. Make sure it handles the singular case correctly by saying `The text` `"``one``"` `contains 1 e.`, instead.


## emordnilaPalindrome {#palindrome}

Write a program that takes a string from the user and determines if it is a palindrome (a word that is the same spelled backwards).


    $ ./palindrome
    Type something: Never odd or even
    The text "Never odd or even" is a palindrome


### Specification

- Create a file called `palindrome.c` in your `~/exercises/strings` directory.
- Compile the program with the command `make palindrome`.
- Make sure your program is not case sensitive.


## tHe CaSe Of BoB (extra)

SpOnGeBoB tAlKs FuNnY, lIkE tHiS:

![](bob.jpg)

Create a program that turns a string into the alternating case of Spongebob.

    $ ./bob
    Type something: Know your meme
    Spongebob says: kNoW yOuR mEmE


### Specification

- Create a file called `bob.c` in your `~/exercises/strings` directory.
- Create a program that asks for user input and changes it into alternating case. Start with lower case, and make sure to skip spaces and punctuation.
- Compile the program with the command `make bob`.


## Taboo (extra)

Using the word 'cat' is taboo. Write a program that replaces the word 'cat' from the user input to 'dog'.

    $ ./taboo
    Type something: The Cheshire Cat is the cat of the Duchess.
    Don't say that, say: The Cheshire Dog is the dog of the Duchess.

### Super more comfortable

If you want to make this exercise even more challenging, write the program in such a way that it does not replace 'cat' if it is part of another word.

    $ ./taboo
    Type something: The catholic cat of Catan works for the syndicate.
    Don't say that, say: The catholic dog of Catan works for the syndicate.

### Specification

- Create a file called `taboo.c` in your `~/exercises/strings` directory.
- Write a program that takes a string from the user and replaces all instances of 'cat' for 'dog'.


## How to submit

As soon as you're done, submit your implementations below! 

1. Toward CS50 IDE's top-left corner, within its "file browser" (not within a terminal window), control-click or right-click your `vertical.c` file (that's within your `~/exercises/strings` directory) and then select **Download**. You should find that your browser has downloaded `vertical.c`.

2. Do the same for your other exercises.

2. Make sure you are signed in to **this** website!

3. Type the names of students that you've worked with on this problem: <input type="text" required>

4. In the form below, choose the files that you just downloaded.

5. Press "Submit for grading". Presto!

Your program will then again be checked using `check50` and the result will be recorded on this website. Should the check fail unexpectedly, be sure to try if `check50` is still satisfied when you run it in your IDE's Terminal.
