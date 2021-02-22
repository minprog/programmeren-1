# Numbers

> Deze opdracht is niet bedoeld voor samenwerken, maar je hoeft 'm ook niet helemaal alleen te doen. Het doel is ervaring opdoen met technieken en daarom moet je alles zelf oefenen. Maar schroom niet hulp te vragen, en als het nodig is kan iemand het even voordoen. Als je naderhand maar zelf alle stappen doorlopen hebt.

Your goal is to debug a program using `valgrind`. The program compiles and runs as expected, but alas, valgrind shows errors.

## Getting started

First create a new directory and `cd` into it:

    mkdir ~/exercises/numbers
    cd ~/exercises/numbers

Then, download the files for this problem:

    wget https://github.com/minprog/exercises/raw/main/writing/anonymize/numbers.zip
    unzip numbers.zip
    rm numbers.zip
    cd numbers

## Specification

Debug the program `numbers.c` so that valgrind shows no errors on completion. The program `./numbers` expects one command line argument, your name. Once it starts, it will welcome the user, get the users favourite numbers from a `.txt` file, and then reads those numbers out to the user.

For this assignment you don't have to worry about the user input. You may assume that the user will input only their first name.

## Hints

Use the [valgrind quick start guide](http://valgrind.org/docs/manual/quick-start.html) for some hints on how to use this tool.

