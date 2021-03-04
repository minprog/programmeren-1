# Beatles

> Deze opdracht is niet bedoeld voor samenwerken, maar je hoeft 'm ook niet helemaal alleen te doen. Het doel is ervaring opdoen met technieken en daarom moet je alles zelf oefenen. Maar schroom niet hulp te vragen, en als het nodig is kan iemand het even voordoen. Als je naderhand maar zelf alle stappen doorlopen hebt.

This exercise helps you practice creating `struct`s and variables of some struct type. Using structs, you'll be neatly organizing data that you have about the members of the band The Beatles.

## Background

![embed](https://www.youtube.com/embed/E4lb2gkyXr8)

Watch the video and then precisely answer the following questions. The video may not suffice for answering the questions, so we encourage you to seek additional information online.

1. What is the "dot operator"?

2. What is "dereferencing" a pointer?

3. What are structs used for, according to Doug?

Put your answers in a nicely formatted file called `answers.md` so you can submit it with your solution to the exercises below.

## Getting started

    mkdir -p ~/exercises/beatles
    cd ~/exercises/beatles/
    wget https://github.com/minprog/exercises/raw/main/writing/beatles/beatles.c

## Goal

Write a program that prints the following information:

    The members of The Beatles are:
    Name:       John
    Instrument: guitar, vocals
    Born:       1940

    Name:       Paul
    Instrument: bass, vocals
    Born:       1942

    Name:       George
    Instrument: guitar, vocals
    Born:       1943

    Name:       Ringo
    Instrument: drums
    Born:       1940

We're going to use **structs** to accomplish this!

## Just John

The first goal is to create and print a "musician" struct variable for John.

The file `beatles.c` starts with the definition of a `musician` struct:

    struct musician {
        string name;
        string instrument;
        int year_born;
    };

The struct contains three fields/members: `name`, `instrument` and `year_born`. Below that, the file contains an empty `main()` function. This will be implemented by you.

### Step 1

Create one musician: declare a variable with the name `john` of type `struct musician`.

### Step 2

Set the `name` field of `john` to `"``John``"`, the `instrument` field to `"``guitar, vocals``"`, and the `year_born` field to `1940`.

### Step 3

Now it's time to make a print function for musicians. Create a new function, `void print_musician(struct musician m)`. (Make sure to also add the **prototype** for this function atop the `beatles.c`.)
Implement this function in such a way that if we call it, the output will something like this:

    Name:       John
    Instrument: guitar, vocals
    Born:       1940

### Step 4

In the `main` function, add the line:

    print_musician(john);

### Step 5

Compile and test. Does the function print all information about John, as shown above?

Congratulations, you finished the first challenge!

## The Fab Four

Now let's add the other Beatles. We're not going to create 4 separately named variables for each individual, but instead an array that will contain information about all four Beatles.

### Step 1

Remove the variable `john` and instead create a `musician` array with the name `beatles`.

If you know how to declare an array of `int`s, you will able to infer how to declare an array of `struct musician`s!

### Step 2

Add the information about the individual Beatles to the array. (This may be hard-coded. No need to ask for user input in this assignment!)

### Step 3

Now write a `for` loop that prints the name of all the Beatles using your `print_musician` function, feeding it each element of the array.

## Submit

Congratulations, you're done! Submit your answers and solution below.
