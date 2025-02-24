# Find

Implement a program that finds a number among numbers, per the below.

    $ ./find 42 -r 1000
    Didn't find needle in haystack.

    $ ./find 42 -s 50
    Found needle in haystack!

## Download

[Get the program template](/problems/find/dist/find_single.zip)

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

When using the `-r` argument, the numbers that fill the haystack should be sequential, counting from 0, which means that all numbers between 0 and `h-1` will be in the haystack. This is useful for testing, because it should always be able to find the needle.

    $ ./find 42 -s 50
    Found needle in haystack!

And if generating a number of sequential values like that, but having the needle be higher than the highest value in the haystack, you can be certain that the needle cannot be found.

    $ ./find 42 -s 40
    Didn't find needle in haystack.

## Debugging

If your output is not as expected, remeber to add `printf` statements to check the value of variables at certain points in the program. This may help you pinpoint the cause of your troubles.

Should you encounter crashes, i.e. your program just stops, you should certainly check if you aren't violating the boundaries of your array!

## Automated tests

Not available yet.
