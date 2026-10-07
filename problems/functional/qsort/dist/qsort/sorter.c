// Sorts datasets with your own qsort_, to show off that it works for any type

#define _XOPEN_SOURCE 700

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "compare.h"
#include "qsort.h"

#define MAX_ITEMS 100000

static int run_numbers(const char *order);
static int run_words(const char *order);
static int run_countries(const char *order);
static int run_bench(int n);
static void usage(void);

int main(int argc, char *argv[])
{
    if (argc == 3 && strcmp(argv[1], "bench") == 0)
    {
        int n = atoi(argv[2]);
        if (n < 1 || n > 10000000)
        {
            usage();
            return 1;
        }
        return run_bench(n);
    }

    if (argc != 2 && argc != 3)
    {
        usage();
        return 1;
    }

    const char *what = argv[1];
    const char *order = argc == 3 ? argv[2] : NULL;

    if (strcmp(what, "numbers") == 0)
    {
        return run_numbers(order ? order : "asc");
    }
    if (strcmp(what, "words") == 0)
    {
        return run_words(order ? order : "alpha");
    }
    if (strcmp(what, "countries") == 0)
    {
        return run_countries(order ? order : "name");
    }

    usage();
    return 1;
}

static void usage(void)
{
    printf("Usage: ./sorter numbers [asc|desc]\n");
    printf("       ./sorter words [alpha|length]\n");
    printf("       ./sorter countries [name|population|density]\n");
    printf("       ./sorter bench <n>\n");
}


// ---- Verification -------------------------------------------------------
// These comparators are our own, so we can check your qsort_ independently of
// your comparators in compare.c.

static int expected_int_asc(const void *a, const void *b)
{
    int x = *(const int *) a, y = *(const int *) b;
    return (x > y) - (x < y);
}

static int expected_int_desc(const void *a, const void *b)
{
    return expected_int_asc(b, a);
}

static int expected_alpha(const void *a, const void *b)
{
    return strcmp(*(char * const *) a, *(char * const *) b);
}

static int expected_length(const void *a, const void *b)
{
    const char *x = *(char * const *) a, *y = *(char * const *) b;
    size_t lx = strlen(x), ly = strlen(y);
    if (lx != ly)
    {
        return lx < ly ? -1 : 1;
    }
    return strcmp(x, y);
}

static int expected_name(const void *a, const void *b)
{
    return strcmp(((const country *) a)->name, ((const country *) b)->name);
}

static int expected_population(const void *a, const void *b)
{
    long x = ((const country *) a)->population;
    long y = ((const country *) b)->population;
    return (x < y) - (x > y);
}

static int expected_density(const void *a, const void *b)
{
    const country *x = a, *y = b;
    double dx = (double) x->population / x->area;
    double dy = (double) y->population / y->area;
    return (dx < dy) - (dx > dy);
}

// Checks that `sorted` holds exactly the elements of `original`, in the order
// given by `expected`. Prints the verdict.
static int verify(const void *sorted, const void *original, size_t n,
                  size_t size, int (*expected)(const void *, const void *))
{
    void *reference = malloc(n * size);
    if (reference == NULL)
    {
        printf("Out of memory\n");
        return 1;
    }
    memcpy(reference, original, n * size);
    qsort(reference, n, size, expected);

    for (size_t i = 0; i < n; i++)
    {
        const char *x = (const char *) sorted + i * size;
        const char *y = (const char *) reference + i * size;
        if (expected(x, y) != 0)
        {
            printf("\nNOT sorted correctly: element %zu is wrong.\n", i);
            free(reference);
            return 1;
        }
    }
    printf("\nSorted correctly! (%zu elements)\n", n);
    free(reference);
    return 0;
}

static int run_numbers(const char *order)
{
    int (*compare)(const void *, const void *);
    int (*expected)(const void *, const void *);
    if (strcmp(order, "asc") == 0)
    {
        compare = compare_int;
        expected = expected_int_asc;
    }
    else if (strcmp(order, "desc") == 0)
    {
        compare = compare_int_desc;
        expected = expected_int_desc;
    }
    else
    {
        usage();
        return 1;
    }

    FILE *file = fopen("data/numbers.txt", "r");
    if (file == NULL)
    {
        printf("Could not open data/numbers.txt\n");
        return 1;
    }

    static int numbers[MAX_ITEMS];
    int n = 0;
    while (n < MAX_ITEMS && fscanf(file, "%d", &numbers[n]) == 1)
    {
        n++;
    }
    fclose(file);

    static int original[MAX_ITEMS];
    memcpy(original, numbers, n * sizeof(int));

    qsort_(numbers, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%i\n", numbers[i]);
    }
    return verify(numbers, original, n, sizeof(int), expected);
}

static int run_words(const char *order)
{
    int (*compare)(const void *, const void *);
    int (*expected)(const void *, const void *);
    if (strcmp(order, "alpha") == 0)
    {
        compare = compare_string;
        expected = expected_alpha;
    }
    else if (strcmp(order, "length") == 0)
    {
        compare = compare_length;
        expected = expected_length;
    }
    else
    {
        usage();
        return 1;
    }

    FILE *file = fopen("data/words.txt", "r");
    if (file == NULL)
    {
        printf("Could not open data/words.txt\n");
        return 1;
    }

    // an array of pointers to strings: each element is a char *
    static char *words[MAX_ITEMS];
    int n = 0;
    char buffer[64];
    while (n < MAX_ITEMS && fscanf(file, "%63s", buffer) == 1)
    {
        words[n] = strdup(buffer);
        n++;
    }
    fclose(file);

    static char *original[MAX_ITEMS];
    memcpy(original, words, n * sizeof(char *));

    qsort_(words, n, sizeof(char *), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }
    int result = verify(words, original, n, sizeof(char *), expected);

    for (int i = 0; i < n; i++)
    {
        free(original[i]);
    }
    return result;
}

static int run_countries(const char *order)
{
    int (*compare)(const void *, const void *);
    int (*expected)(const void *, const void *);
    if (strcmp(order, "name") == 0)
    {
        compare = compare_country_name;
        expected = expected_name;
    }
    else if (strcmp(order, "population") == 0)
    {
        compare = compare_country_population;
        expected = expected_population;
    }
    else if (strcmp(order, "density") == 0)
    {
        compare = compare_country_density;
        expected = expected_density;
    }
    else
    {
        usage();
        return 1;
    }

    FILE *file = fopen("data/countries.csv", "r");
    if (file == NULL)
    {
        printf("Could not open data/countries.csv\n");
        return 1;
    }

    // an array of structs: each element is a country, stored inline
    static country countries[MAX_ITEMS];
    int n = 0;
    char line[128];
    while (n < MAX_ITEMS && fgets(line, sizeof(line), file) != NULL)
    {
        country c;
        if (sscanf(line, "%31[^,],%ld,%ld", c.name, &c.population, &c.area) == 3)
        {
            countries[n] = c;
            n++;
        }
    }
    fclose(file);

    static country original[MAX_ITEMS];
    memcpy(original, countries, n * sizeof(country));

    qsort_(countries, n, sizeof(country), compare);

    for (int i = 0; i < n; i++)
    {
        country c = countries[i];
        printf("%-24s %12ld %10ld %8.1f\n", c.name, c.population, c.area,
               (double) c.population / c.area);
    }
    return verify(countries, original, n, sizeof(country), expected);
}

// Sorts n random ints with qsort_ and with the standard qsort, and compares
static int run_bench(int n)
{
    int *a = malloc(n * sizeof(int));
    int *b = malloc(n * sizeof(int));
    if (a == NULL || b == NULL)
    {
        printf("Out of memory\n");
        return 1;
    }

    srand48(50);
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i] = (int) (drand48() * 1000000);
    }

    struct timespec t0, t1, t2;

    clock_gettime(CLOCK_MONOTONIC, &t0);
    qsort_(a, n, sizeof(int), compare_int);
    clock_gettime(CLOCK_MONOTONIC, &t1);
    qsort(b, n, sizeof(int), compare_int);
    clock_gettime(CLOCK_MONOTONIC, &t2);

    double mine = (t1.tv_sec - t0.tv_sec) + (t1.tv_nsec - t0.tv_nsec) / 1e9;
    double theirs = (t2.tv_sec - t1.tv_sec) + (t2.tv_nsec - t1.tv_nsec) / 1e9;

    int correct = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            correct = 0;
            break;
        }
    }

    printf("qsort_: %.3f s\n", mine);
    printf("qsort:  %.3f s\n", theirs);
    printf("%s\n", correct ? "Results match." : "Results DIFFER!");

    free(a);
    free(b);
    return !correct;
}
