# Speller: Load

Implementing `load` is quite a challenge! That's because when implementing load, your data structure (the hash table) will become real as you progress. For example, to load the dictionary, you will have to **insert** each word into your hash table, which means that the linked lists inside the hash table have to exist.

After you have implemented `load`, the remaining functions will be a little bit easier because they can be based on the hash table that's already loaded. But more on that in the next few days!


## Hashing

For `load()` to work correctly, you will need a hash function that maps a given word to a "bucket" in the hash table. Let's start with this (very bad) hash function:

    unsigned int hash(const char *word); 
    {
        return 0;
    }

This function ensures that **each and every word** ends up in bucket 0, which is ridiculous, but it should work anyway! You will just end up loading all words into a very long linked list.

You can copy-paste this into `dictionary.c`. Don't forget to also add the function prototype to `dictionary.h`.


## Starting a hash table

To actually have an entry point for your hash table, here's how you should do that in `dictionary.c`:

    node *table[BUCKETS];

Now you have a variable called `table` that you'll be working with in `load`, `check`, `size` and `unload`. Finally, to indicate the number of buckets, you should probably add a constant to `dictionary.c` as well:

    const unsigned int BUCKETS = 1;

Later, when you're going to create a better hash function, you can increase this number.


## Walkthrough

<div markdown="1" class="extend">
[![](walkthrough.jpg)](https://www.youtube.com/watch?v=-BX4wLZRwbc)
</div>

[Open video on Youtube](https://www.youtube.com/watch?v=-BX4wLZRwbc)

When you're done, submit your `dictionary.c` below, including your solution to the `load` function.
