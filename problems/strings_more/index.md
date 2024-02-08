## emordnilaPalindrome (optional)

Write a program that takes a string from the user and determines if it is a palindrome (a word that is the same spelled backwards). Spaces must be ignored.

    $ ./palindrome
    Type something: Never odd or even
    The text "Never odd or even" is a palindrome

### Specification

- Create a file called `palindrome.c`.
- Compile the program with the command `make palindrome`.
- Make sure your program is not case sensitive.

## Taboo (optional)

Using the word 'cat' is taboo. Write a program that replaces the word 'cat' from the user input to 'dog'. Even better, 'Cat' becomes 'Dog', with casing left intact!

    $ ./taboo
    Type something: The Cheshire Cat is the cat of the Duchess.
    Don't say that, say: The Cheshire Dog is the dog of the Duchess.

### Super more comfortable

If you want to make this exercise even more challenging, write the program in such a way that it does not replace 'cat' if it is part of another word.

    $ ./taboo
    Type something: The catholic cat of Catan works for the syndicate.
    Don't say that, say: The catholic dog of Catan works for the syndicate.

### Specification

- Create a file called `taboo.c`.
- Write a program that takes a string from the user and replaces all instances of 'cat' for 'dog'.
