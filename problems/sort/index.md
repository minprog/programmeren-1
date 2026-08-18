# Sort

Implement a program that sorts numbers, per the below.

    $ ./sort 5
    1122
    51316
    58314
    60815
    64289

## Download

[Get the program template](https://github.com/minprog/programmeren-1/raw/refs/heads/2026/problems/sort/dist/sort.zip)

The template contains three files:

    sort.c      helpers.c   helpers.h

This is the first assignment where your program consists of **more than one file**. The section _Compiling multiple files_ below explains how to compile and run such a program.

## Understanding

### `sort.c`

This file contains the `main` function of the program you are going to complete. It does the following:

- Validate the command-line argument: the number of values to sort

- Create an array of appropriate size and fill it with random numbers

- Call the `sort` function (TODO!) to get the numbers in order

- Print all numbers in the array

Compile and run the program (see _Compiling multiple files_, below) with an argument of, say, `10`. You should see a list of 10 numbers, in the order they were generated: the sorting does not work yet. That's where you come in.

If you run the program without any argument at all, you should be informed of its proper usage, per the below.

    Usage: ./sort <n>

### `helpers.c` and `helpers.h`

Notice that, in `sort.c`, `main` calls `sort`, a function that is **not** defined in `sort.c` itself. It is declared in `helpers.h` and it is supposed to be implemented in `helpers.c`. Unfortunately, we forgot to implement that function fully! Indeed, take a peek at `helpers.c`, and you'll see that `sort` always returns without doing anything else.

To be sure, we could have put the contents of `helpers.h` and `helpers.c` in `sort.c` itself. But it's sometimes better to organize programs into multiple files, especially when some functions are essentially "utility functions" that might later prove useful to other programs as well, much like those in the CS50 Library.

A `.h` file (a "header file") contains only **prototypes**: it tells any file that includes it which functions exist and what their arguments are. The actual implementations live in the corresponding `.c` file. That is why both `sort.c` and `helpers.c` start with:

    #include "helpers.h"

Note the quotes instead of angle brackets: those say "this header is one of my own files, not one of the system's".

Notice too, per `helpers.h`, that the prototype for `sort` is:

    void sort(int values[], int n);

The function takes an array, `values`, as one of the arguments, as well as an integer, `n`, the size of that array. That's because, when passing an array to a function, you have to pass in its size separately; you can't infer an array's size from the array itself.

### Generating random numbers

Implemented in `sort.c` is a function `generate_random_numbers` that uses a "pseudorandom-number generator" (via a function called `drand48`) to fill the array with a whole bunch of random (well, pseudorandom, since computers can't actually generate truly random) numbers, each of which is in [0, `LIMIT`), where `LIMIT` is a constant defined within the file, so to speak. That is, each is greater than or equal to 0 and less than `LIMIT`.

Before generating any numbers, `main` calls `srand48`, whose purpose is to "seed" `drand48`. A seed is simply an input to a pseudorandom-number generator that influences its outputs: seed it with the same value twice, and you get the exact same "random" sequence twice. That is why `sort.c` seeds with the current time --- so that you get a different list of numbers on every run. Run the program a few times with the same `n` to see that for yourself. For more details on `drand48` and `srand48`, you can look them up in the CS50 Manual.

## Compiling multiple files

Until now, every program you wrote was a single `.c` file, and the **Run** button could simply compile and run it. This program is different: `sort` is built from **two** source files, `sort.c` and `helpers.c`. You have to tell the IDE about that, using the **Run as** button.

1. Make sure `sort.c` is the file you have open in the editor, then click **Run as** in the toolbar at the top (right next to **Run**, as you used it for Calendar). A window appears with three fields.
2. Leave **Arguments** empty for now, or fill in the amount of numbers to sort, e.g. `10`.
3. In **Source files**, list both files that make up the program, separated by a space:

        sort.c helpers.c

   Do **not** list `helpers.h` here: only `.c` files are compiled. The header is found automatically because `sort.c` and `helpers.c` include it themselves.
4. In **Target**, fill in the name of the program you are building:

        sort

5. The **Preview** at the bottom shows the commands that will be executed. Check that the last two read:

        clang ... -o sort sort.c helpers.c ...
        ./sort 10

   The first one compiles both source files into a single program called `sort`, the second one runs it.

6. Click **Run**.

The IDE remembers these settings, so from now on you can just click **Run as** and then **Run** to rebuild and run your program. Do note that the plain **Run** button still compiles only the file you have open, which will fail for `sort.c`. So use **Run as** from here on.

## Specification

Complete the implementation of the program `sort` by completing the implementation of the function `sort` in `helpers.c`.

> Do not attempt do this assignment before studying the other sorting algorithms very well.

Sort must be implemented using the following algorithm, which is **not** any of the algorithms discussed in earlier assignments. However, many of the sorting algorithms do indeed look quite alike.

- The algorithm must consider each position in the array from left to right, and progressively sort the numbers.
  - This means that, in each step, more numbers get sorted from left to right, unless they're already sorted, of course.
  - This also means that the algorithm need never consider the last number in the array, because as soon as that number is reached, it has already been sorted while considering the other numbers. (In other words, if `n-1` numbers are indeed sorted, the last number would by definition also be sorted.)
- Then **for each** of the positions that we consider from left to right, consider **all** positions to the right of it.
  - For each **combination** of positions, if the first one is larger, swap those numbers.
  - For example, for position 0, you consider positions 1, 2, 3, etc... and try to swap each time.
- You may not alter the function's declaration. Its prototype must remain:

      void sort(int values[], int n);

- You may not use recursion to perform the sort, i.e. the function `sort` may never call itself.

Be sure to translate this description of the algorithm's properties to some form of pseudocode before you take to translating it into C.

## Usage

Your program should behave per the examples below.

    $ ./sort 2
    1122
    51316

    $ ./sort 6
    1122
    9245
    51316
    58314
    60815
    64289

It's up to you to test using different test cases, i.e. different _amounts_ of numbers.
