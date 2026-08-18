/**
 * Generates n random numbers, then prints them in sorted order.
 * Used to test `sort`.
 *
 * Usage: ./sort <n>
 *
 */

#ifndef _XOPEN_SOURCE
    #define _XOPEN_SOURCE 500
#endif

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "helpers.h"

// maximum value of random numbers
#define LIMIT 65536

// maximum array size
#define MAX 65536

// Fills array of n values with random numbers
void generate_random_numbers(int values[], int n);

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./sort <n>\n");
        return 1;
    }

    int size = atoi(argv[1]);
    if (size <= 1 || size > MAX)
    {
        printf("Please enter a valid size between 1 and %d\n", MAX);
        return 1;
    }

    // seed the random number generator
    srand48((long int) time(NULL));

    // generate random numbers
    int haystack[size];
    generate_random_numbers(haystack, size);

    // sort the haystack
    sort(haystack, size);

    // print the haystack, one item per line
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", haystack[i]);
    }
}

// Fills array of n values with random numbers
void generate_random_numbers(int values[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // random number between 0 and LIMIT
        values[i] = (int) (drand48() * LIMIT);
    }
}
