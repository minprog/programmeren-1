// Include guard: prevents this header from being included twice
#ifndef QSORT_H
#define QSORT_H

#include <stddef.h>

// Swaps the `size` bytes at a with the `size` bytes at b
void swap(void *a, void *b, size_t size);

// Sorts an array of nmemb elements of `size` bytes each, starting at base,
// such that compare(x, y) <= 0 for every x that is placed before y.
// Same contract as the standard qsort, of which this is a copy.
void qsort_(void *base, size_t nmemb, size_t size,
            int (*compare)(const void *, const void *));

#endif
