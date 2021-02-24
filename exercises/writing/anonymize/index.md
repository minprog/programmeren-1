# Anonymize

> Samenwerken bij deze opdracht is niet toegestaan; het is prima om medestudenten en anderen om hulp te vragen, als het er maar niet op neerkomt dat iemand anders een deel van het werk voor je doet. Voorbeelden van "redelijke" en "onredelijke" manieren van samenwerken vind je in de studiewijzer.

This assignment builds on your experience from "Whodunit". Your goal is to modify one part of an image instead of every pixel.

## Getting started

First create a new directory and `cd` into it:

    mkdir ~/problems/anonymize
    cd ~/problems/anonymize

Then download the starter files:

    wget https://github.com/minprog/exercises/raw/main/writing/anonymize/anonymize.zip
    unzip anonymize.zip
    rm anonymize.zip
    cd anonymize

## Specification

Implement a program that covers the eyes of a suspect's photo with a black bar.

- We have provided a photo of the suspect called `suspect.bmp`. You need to make a copy of this image, but change some pixels so the image is censored with a black bar over the suspect's eyes.
- If you open `suspect.bmp` in the IDE you can make a selection and see the coordinates of your cursor.
- **It is OK to hardcode the program (the coordinates of the black bar) to only work for this image.**
- We have already taken care of error checking the user input for you.

> The CS50 IDE no longer shows coordinates upon selecting parts of an image. Instead you can use local programs such as preview on Mac or paint on Windows to extract the coordinates yourself. Alternatively, you are free to use the following coordinates for the black bar in suspect.bmp: 170,80 (top left x,y) and 250,105 (bottom right x,y).

## Background

As you may know an RGB colour is often represented in [hexadecimal](https://en.wikipedia.org/wiki/Hexadecimal) notation, which is wat we want you to use in this assigment as well. The color white `ffffff` means red: `ff`, green: `ff`, blue: `ff`. `ff` in decimal notation is `255`, which is why white can also be written as `(255,255,255)`. In C you can represent a hexadecimal value bij putting `0x` in front of it. `255` can thus be written as `0xff`.

### `anonymize.c`

We've put together a program that copies a bmp file to a new file. Take a look at `anonymize.c`. For this assigment you don't have to understand what every line does yet, but notice that it loops over the width and height of the input image. Inside that loop it reads a triple from the input file, calls the function `process_pixel`, and writes another triple to the output file. You do not need to change this file.

### `censor.h`

Now open up `censor.h`. This is a header file that defines the structures needed for `anonymize.c`. Scroll to the bottom and look at the struct called `RGBTRIPLE`. This is the representation of a pixel. As you can see it consists of a red, a green, and a blue variable, just like an RGB pixel does. At the end of the file is the declaration of the `process_pixel` function.

### `censor.c`

Inside `censor.c` is the function `process_pixel`. This function takes as arguments the current pixel of the input file, as well as its vertical and horizontal location. It returns the changed pixel.
Makefile
A makefile is a file that tells the computer how to compile a program that is made up of different files. You can look at it, but shouldn't change anything.

### TODO

Now it is up to you to implement `process_pixel` inside `censor.c`. Which pixels need to be changed? And how can you change them?

## Usage

If you want to change your program you can make it by either calling `make anonymize` or just `make`. The makefile will do the rest. You can now run the program, for example like this:

    ./anonymize suspect.bmp censored.bmp

## Done?

Got time left? Improve your program so it is not hardcoded for `suspect.bmp`. You are now permitted to change anything you need in `anonymize.c`, `censor.c` and `censor.h` to allow the user to input coordinates for the black bar.

## How to submit

As soon as you're done, submit your `censor.c` implementation, below! 

1. Toward CS50 IDE's top-left corner, within its "file browser" (not within a terminal window), control-click or right-click your `censor.c` file (that's within your `~/problems/anonymize` directory) and then select **Download**. You should find that your browser has downloaded `censor.c`.

3. Make sure you are signed in to this website.

4. In the form below, choose the files that you just downloaded.

5. Press "Submit for grading". Presto!
