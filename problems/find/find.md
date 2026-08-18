# Find

Implement a program that finds a number among numbers, per the below.

    $ ./find 42 -r 1000
    Didn't find needle in haystack.

    $ ./find 42 -s 50
    Found needle in haystack!

## Download

[Get the program template](https://github.com/minprog/programmeren-1/raw/refs/heads/2026/problems/find/dist/find.zip)

The template contains three files:

    find.c      helpers.c   helpers.h

Just like in the Sort assignment, this program consists of more than one file. The section _Compiling multiple files_ below is a reminder of how to compile and run such a program.

## Understanding

### `find.c`

This file contains the `main` function of the program, and you do not have to change it. It expects three command-line arguments: a "needle" to search for, a flag that says how the "haystack" should be filled, and the amount of hay. It does the following:

- Validate the command-line arguments

- Create an array of the requested size and fill it with either random or sequential numbers

- Sort the array by calling `sort` (TODO!)

- Search the array for the needle by calling `search` (TODO!), and report whether it was found

Also implemented in `find.c` is a function `generate_random_numbers`, which uses a "pseudorandom-number generator" (via a function called `drand48`) to fill the array with random (well, pseudorandom, since computers can't actually generate truly random) numbers, each of which is in [0, `LIMIT`), where `LIMIT` is a constant defined within the file, so to speak.

Incidentally, note that `main` is written in such a way that `find` returns `0` if the needle is found, else it returns `1`. That is called an "exit code", and it is how a program reports its result to whatever started it --- the checks use it too.

### `helpers.c` and `helpers.h`

Notice that, in `find.c`, `main` calls `search` and `sort`, functions that are **not** defined in `find.c` itself. They are declared in `helpers.h` and they are supposed to be implemented in `helpers.c`, together with `generate_sequential_numbers`. Unfortunately, we forgot to implement those functions fully! Indeed, take a peek at `helpers.c`, and you'll see that `search` always returns `false`, whether or not `value` is in `values`, and that the other two do nothing at all.

To be sure, we could have put the contents of `helpers.h` and `helpers.c` in `find.c` itself. But it's sometimes better to organize programs into multiple files, especially when some functions are essentially "utility functions" that might later prove useful to other programs as well, much like those in the CS50 Library.

A `.h` file (a "header file") contains only **prototypes**: it tells any file that includes it which functions exist and what their arguments are. The actual implementations live in the corresponding `.c` file. That is why both `find.c` and `helpers.c` start with:

    #include "helpers.h"

Note the quotes instead of angle brackets: those say "this header is one of my own files, not one of the system's".

Notice too, per `helpers.h`, that the prototype for `search` is:

    bool search(int value, int values[], int n);

And the prototype for `sort` is:

    void sort(int values[], int n);

Both functions take an array, `values`, as one of their arguments as well as an integer, `n`, the size of that array. That's because, when passing an array to a function, you have to pass in its size separately; you can't infer an array's size from the array itself.

## Compiling multiple files

`find` is built from **two** source files, `find.c` and `helpers.c`, so the plain **Run** button will not do: it only compiles the file you have open. Use **Run as** instead, exactly as you did for Sort:

1. Make sure `find.c` is the file you have open in the editor, then click **Run as** in the toolbar at the top.
2. In **Arguments**, fill in the arguments to run with, e.g. `42 -s 50`.
3. In **Source files**, list both files that make up the program, separated by a space:

        find.c helpers.c

   Do **not** list `helpers.h` here: only `.c` files are compiled. The header is found automatically because `find.c` and `helpers.c` include it themselves.
4. In **Target**, fill in the name of the program you are building:

        find

5. The **Preview** at the bottom shows the commands that will be executed. Check that the last two read:

        clang ... -o find find.c helpers.c ...
        ./find 42 -s 50

6. Click **Run**.

The IDE remembers these settings, so from now on you can click **Run as** and then **Run** to rebuild and run. When you want to search for another needle, or use another haystack, click **Run as** and change the Arguments field.

## Specification

Complete the implementation of `find` by completing the implementation of `generate_sequential_numbers`, `search` and `sort` in `helpers.c`.

- Function `generate_sequential_numbers` must fill the array with sequential numbers counting from 0 until the array is filled.

- Function `search` must be implemented as [Binary Search](https://www.youtube.com/watch?v=T98PIp4omUA).

  - Your implementation must return `false` immediately if `n` is non-positive.

  - Your implementation must return `true` if `value` is in `values` and `false` if `value` is not in `values`.

  - You may not alter the function's declaration. Its prototype must remain:

        bool search(int value, int values[], int n);

- Function `sort` must be implemented as [Counting Sort](https://en.wikipedia.org/wiki/Counting_sort).

  - Your implemenation must sort, from smallest to largest, the array of numbers that it's passed.

  - You may not alter the function's declaration. Its prototype must remain:

        void sort(int values[], int n);

## Usage and testing

Your program should behave per the examples below.

When run with the wrong arguments, it should print a `Usage` line to help remind the user about the options. There are three required arguments.

    $ ./find
    Usage: ./find n [-r|-s] h

When using the `-r` argument, the program should generate the amount of hay specified in `h` by using a random number generator. In this case, the chance of having any specific number in the haystack is low, so likely the output is as follows (but not always!).

    $ ./find 42 -r 10
    Didn't find needle in haystack.

When using the `-s` argument, the numbers that fill the haystack should be sequential, counting from 0, which means that all numbers between 0 and `h-1` will be in the haystack. This is useful for testing, because it should always be able to find the needle.

    $ ./find 42 -s 50
    Found needle in haystack!

And if generating a number of sequential values like that, but having the needle be higher than the highest value in the haystack, you can be certain that the needle cannot be found.

    $ ./find 42 -s 40
    Didn't find needle in haystack.

## Debugging

If your output is not as expected, remember to add `printf` statements to check the value of variables at certain points in the program. This may help you pinpoint the cause of your troubles.

Should you encounter crashes, i.e. your program just stops, you should certainly check if you aren't violating the boundaries of your array!
