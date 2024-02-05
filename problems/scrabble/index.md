# Scrabble

In a file called `scrabble.c` implement a program to determine which of two Scrabble words is worth more.

    $ ./scrabble
    Player 1: COMPUTER
    Player 2: science
    Player 1 wins!

## Background

In the game of [Scrabble](https://scrabble.hasbro.com/en-us/rules), players create words to score points, and the number of points is the sum of the point values of each letter in the word.

| A   | B   | C   | D   | E   | F   | G   | H   | I   | J   | K   | L   | M   | N   | O   | P   | Q   | R   | S   | T   | U   | V   | W   | X   | Y   | Z   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 1   | 3   | 3   | 2   | 1   | 4   | 2   | 4   | 1   | 8   | 5   | 1   | 3   | 1   | 1   | 3   | 10  | 1   | 1   | 1   | 1   | 4   | 4   | 8   | 4   | 10  |

For example, if we wanted to score the word `Code`, we would note that in general Scrabble rules, the `C` is worth `3` points, the `o` is worth `1` point, the `d` is worth `2` points, and the `e` is worth `1` point. Summing these, we get that `Code` is worth `3 + 1 + 2 + 1 = 7` points.

> Though Scrabble rules normally require that a word be in the dictionary, no need to check for that in this problem!

## Implementation Details

- Characters that are not letters should be given zero points.
- Uppercase and lowercase letters should be given the same point values.

### Hints

- You may find the functions `isupper()` and `islower()` to be helpful to you. These functions take in a character as the argument and return a boolean.

- Recall that computers represent characters using [ASCII](http://asciitable.com/), a standard that represents each character as a number.

### How to Test Your Code

Your program should behave per the examples below.

    $ ./scrabble
    Player 1: Question?
    Player 2: Question!
    Tie!

    $ ./scrabble
    Player 1: Oh,
    Player 2: hai!
    Player 2 wins!

    $ ./scrabble
    Player 1: COMPUTER
    Player 2: science
    Player 1 wins!

    $ ./scrabble
    Player 1: Scrabble
    Player 2: wiNNeR
    Player 1 wins!

Execute the below to evaluate the correctness of your code using `check50`. But be sure to compile and test it yourself as well!

    check50 -l minprog/checks/2022/scrabble
