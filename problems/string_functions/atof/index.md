# atof and ftoa

> Do feel free to use any functions from the previous `atoi` assignment, they might prove useful! In this assignment you will submit a single file `float_conversion.c`, and as such you will have to copy over any previous functions into that file.

### atof

In a file called `float_conversion.c` write a function called `atof_` (ASCII string To Float) that takes in a string (`char*`) and returns that string as a `float`. You may assume the string consists only of digits. In case of a negative number the string starts with a `-`. This is the prototype:

    float atof_(const char* str);

### ftoa

In the same file `float_conversion.c` write a function called `ftoa_` (Float To ASCII string) that takes in a `float` and returns that `float` as a string (`char*`) with a certain precision. The argument `precision` indicates the maximal number of decimals. `ftoa_` should allocate just enough memory using `malloc` to store the `float` as a string. Be sure to account for negative numbers. This is the prototype:

    char* ftoa_(float n, int precision);

Here are some interesting test cases;

    printf("%s\n", ftoa_(28.12, 6)); // should print 28.12, and not 28.120000
    printf("%s\n", ftoa_(2, 4)); // should print 2.0
    printf("%s\n", ftoa_(3.0, 3)); // should print 3.0
    printf("%s\n", ftoa_(0, 3)); // should print 0.0

> Besides `malloc`, you might find [realloc](https://manual.cs50.io/3/realloc) helpful!