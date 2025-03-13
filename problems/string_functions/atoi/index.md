# atoi and itoa

### atoi

In a file called `int_conversion.c` write a function called `atoi_` (ASCII string To Integer) that takes in a string (`char*`) and returns that string as an `int`. You may assume the string consists only of digits. In case of a negative number the string starts with a `-`. This is the prototype:

    int atoi_(const char* str);

### itoa

In the same file `int_conversion.c` write a function called `itoa_` (Integer To ASCII string) that takes in an `int` and returns that `int` as a string (`char*`). `itoa_` should allocate just enough memory using `malloc` to store the `int` as a string. Be sure to account for negative numbers. This is the prototype:

    char* itoa_(int n);