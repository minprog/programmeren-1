# Speller: Check

Now that your program can load all words from a lexicon into your hash table, let's implement "check"!

> If you do not have a working hash function at this point, head back to the instructions for "load" and copy the hash function that's mentioned there.


## Walkthrough

<div markdown="1" class="extend">
[![](walkthrough.jpg)](https://www.youtube.com/watch?v=qPz_Mr69yE0)
</div>

[Open video on Youtube](https://www.youtube.com/watch?v=qPz_Mr69yE0)


## Testing

How to check whether your program is outputting the expected misspelled words? Well, you're welcome to consult the "answer keys" that are inside of the `keys` directory that's inside of your `speller` directory. For instance, inside of `keys/lalaland.txt` are all of the words that your program _should_ think are misspelled.

You could therefore run your program on some text in one window, as with the below.

    ./speller texts/lalaland.txt

And you could then run the staff's solution on the same text in another window, as with the below.

    ~cs50/2020/fall/pset5/speller texts/lalaland.txt

And you could then compare the windows visually side by side. That could get tedious quickly, though. So you might instead want to "redirect" your program's output to a file, as with the below.

    ./speller texts/lalaland.txt > student.txt
    ~cs50/2020/fall/pset5/speller texts/lalaland.txt > staff.txt

You can then compare both files side by side in the same window with a program like `diff`, as with the below.

    diff -y student.txt staff.txt

Alternatively, to save time, you could just compare your program's output (assuming you redirected it to, e.g., `student.txt`) against one of the answer keys without running the staff's solution, as with the below.

    diff -y student.txt keys/lalaland.txt

If your program's output matches the staff's, `diff` will output two columns that should be identical except for, perhaps, the running times at the bottom. If the columns differ, though, you'll see a `>` or `|` where they differ. For instance, if you see

~~~
MISSPELLED WORDS                                                MISSPELLED WORDS

TECHNO                                                          TECHNO
L                                                               L
                                                              > Thelonious
Prius                                                           Prius
                                                              > MIA
L                                                               L
~~~

that means your program (whose output is on the left) does not think that `Thelonious` or `MIA` is misspelled, even though the staff's output (on the right) does, as is implied by the absence of, say, `Thelonious` in the lefthand column and the presence of `Thelonious` in the righthand column.
