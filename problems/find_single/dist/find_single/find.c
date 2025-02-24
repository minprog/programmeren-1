// Searches for a needle in a haystack

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// maximum value of random numbers
#define LIMIT 65536

// maximum array size
#define MAX 65536

// Fills array of size n with random numbers
void generate_random_numbers(int arr[], int n);

// Fills array of size n with sequential numbers
void generate_sequential_numbers(int arr[], int n);

// Returns true if value is in array of n values, else false
bool search(int value, int values[], int n);

// Sorts array of n values
void sort(int values[], int n);

int main(int argc, string argv[])
{
    // Ensure proper usage
    if (argc != 4)
    {
        printf("Usage: ./find n [-r|-s] h\n");
        return -1;
    }

    int size = atoi(argv[3]);
    if (size <= 1 || size > MAX)
    {
        printf("Please enter a valid amount between 1 and %d\n", MAX);
        return 1;
    }

    // Remember needle
    int needle = atoi(argv[1]);

    // Seed the random number generator
    srand48((long int) time(NULL));

    // generate random or sequential numbers
    int haystack[size];
    if(strcmp(argv[2], "-r") == 0)
    {
        generate_random_numbers(haystack, size);
    }
    else if(strcmp(argv[2], "-s") == 0)
    {
        generate_sequential_numbers(haystack, size);
    }
    else
    {
        printf("Please use -r or -s for generating numbers\n");
    }

    // Sort the haystack
    sort(haystack, size);

    // Try to find needle in haystack
    if (search(needle, haystack, size))
    {
        printf("Found needle in haystack!\n\n");
        return 0;
    }
    else
    {
        printf("Didn't find needle in haystack.\n\n");
        return 1;
    }
}

// Fills array of size n with random numbers
void generate_random_numbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // random number between 0 and LIMIT
        arr[i] = (int) (drand48() * LIMIT);
    }
}

// Fills array of size n with sequential numbers
void generate_sequential_numbers(int arr[], int n)
{
    // TODO: implement a sequential number generator
    return;
}

// Returns true if value is in array of n values, else false
bool search(int value, int values[], int n)
{
    // TODO: implement the searching algorithm
    return false;
}

// Sorts array of n values
void sort(int values[], int n)
{
    // TODO: implement the sorting algorithm
    return;
}
