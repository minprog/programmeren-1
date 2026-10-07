// Include guard: prevents this header from being included twice
#ifndef COMPARE_H
#define COMPARE_H

typedef struct
{
    char name[32];
    long population;
    long area;      // in km^2
}
country;

// For all functions: a and b point to elements of the array being sorted.
// Return a negative number if *a should be placed before *b, a positive
// number if *a should be placed after *b, and 0 if either is fine.

// Elements are ints, smallest first
int compare_int(const void *a, const void *b);

// Elements are ints, largest first
int compare_int_desc(const void *a, const void *b);

// Elements are strings (char *), in alphabetical order, as strcmp does
int compare_string(const void *a, const void *b);

// Elements are strings (char *), shortest first, ties in alphabetical order
int compare_length(const void *a, const void *b);

// Elements are countries, in alphabetical order of name
int compare_country_name(const void *a, const void *b);

// Elements are countries, most populous first
int compare_country_population(const void *a, const void *b);

// Elements are countries, most densely populated first (population / area)
int compare_country_density(const void *a, const void *b);

#endif
