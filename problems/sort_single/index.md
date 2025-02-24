# Sort

Implement a program that sorts numbers, per the below.

    $ ./sort
    1122
    51316
    58314
    60815
    64289

## Download

[Get the program template](https://github.com/minprog/programmeren-1/raw/refs/heads/2024/problems/sort_single/dist/sort_single.zip)

## Understanding

The program from the template does the following:

- Validate the command-line argument: the number of values to sort

- Create an array of appropriate size and fill with random numbers

- Call the `sort` function (TODO!) to get the numbers in order

- Print all numbers in the array

## Generating random numbers

Implemented in `generate_random_numbers` is a function that uses a "pseudorandom-number generator" (via a function called `drand48`) to generate a whole bunch of random (well, pseudorandom, since computers can't actually generate truly random) numbers, each of which is in [0, `LIMIT`), where `LIMIT` is a constant defined within the file, so to speak. That is, each is greater than or equal to 0 and less than `LIMIT`.

Go ahead and compile this program by executing the command below.

    make sort

Now run the program you just compiled by executing the command below.

    ./sort

You should be informed of the program's proper usage, per the below.

    Usage: sort n

As this output suggests, this program expects a command-line argument. It indicates how many pseudorandom numbers you'd like to generate.

<!--
The second, `s`, is optional, as square brackets imply; if supplied, it represents the value that the pseudorandom-number generator should use as its "seed." A seed is simply an input to a pseudorandom-number generator that influences its outputs. For instance, if you seed `drand48` by first calling `srand48` (another function whose purpose is to "seed" `drand48`) with an argument of, say, `0`, and then call `drand48` itself three times, `drand48` might return `0.170828`, then `0.749902`, then `0.096372`. But if you instead seed `drand48` by first calling `srand48` with an argument of, say, `1`, and then call `drand48` itself three times, `drand48` might instead return `0.041630`, then `0.454492`, then `0.834817`. But if you re-seed `drand48` by calling `srand48` again with an argument of `0`, the next three times you call `drand48`, you'll again get `0.170828`, then `0.749902`, then `0.096372`! See, not so random.

Go ahead and run this program again, this time with a value of, say, `10` for `n`, as in the below; you should see a list of 10 pseudorandom numbers.

    ./generate 10

Run the program a third time using that same value for `n`; you should see a different list of 10 numbers. Now try running the program with a value for `s` too (e.g., `0`), as in the below.

    ./generate 10 0

Now run that same command again:

    ./generate 10 0

Bet you saw the same "random" sequence of ten numbers again? Yup, that's what happens if you don't vary a pseudorandom number generator's initial seed.

Now take a look at `generate.c` itself. (Remember how?) Comments atop that file explain the program's overall functionality. But it looks like we forgot to comment the code itself. Read over the code carefully until you understand each line and then comment our code for us, replacing each `TODO` with a phrase that describes the purpose or functionality of the corresponding line(s) of code. (Know that an `unsigned int` is just an `int` that cannot be negative.) And for more details on `drand48` and `srand48`, recall that you can execute:

    man drand48

and:

    man srand48

Once done commenting `generate.c`, re-compile the program to be sure you didn't break anything by re-executing the command below.

    make generate

If `generate` no longer compiles properly, take a moment to fix what you broke!
-->

## The `sort` function

Notice that the prototype for `sort` is:

    void sort(int values[], int n);

The function takes an array, `values`, as one of the arguments, as well as an integer, `n`, the size of that array. That's because, when passing an array to a function, you have to pass in its size separately; you can't infer an array's size from the array itself.

## Specification

Complete the implementation of the program `sort` by completing the implementation of the function `sort`.

> Do not attempt do this assignment before studying the other sorting algorithms very well.

Sort must be implemented using the following very specific algorithm, which is **not** any of the standard algorithms discussed in lecture or anywhere else.

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
