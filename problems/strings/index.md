# Strings

Implement the functions below in a file called `strings.c`

## Vertical

Write a function `vertical` that takes a string and prints each character of the string on a new line. For instance, `vertical("tokyo hotel")` should print:

    t
    o
    k
    y
    o

    h
    o
    t
    e
    l

Start like this:

    void vertical(string input)
    {
        
    }

## Skip

Write a function `skip` that takes a string and prints each even character of the string. For instance, `skip("Great, gifts!")` should print:

    Get it!

## Eek

Write a function `eek` that takes a string and tells you how many e's that string contains. For instance, `eek("Eek, a mouse!")` should print:

    The text "Eek, a mouse!" contains 3 e's.

## tHe CaSe Of BoB

sPoNgEbOb TaLkS fUnNy, LiKe ThIs.

Create a function `bob` that takes a string and prints that string into the alternating case of Spongebob. For instance, `bob("Know your meme")` should print:

    kNoW YoUr mEmE

The function bob should not change / modify the string it is passed as argument. Instead leave it as is and just print out the Spongebobbified text.

## Main?

This assignment is only about the four functions above; each one is tested on its own. So your program does not have to ask the user for any input.

Do write a `main` that calls your functions with a few test values, so you can see whether they do what you expect. That `main` can simply stay in `strings.c` when you submit.
