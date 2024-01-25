# Cypher

Implement a program that encrypts messages using an inverted alphabet, per the below.

    $ ./cypher
    plaintext:  hEllo wOrld
    cyphertext: SvOOL DlIOW

## Background

Let's dive into cryptography. There are plenty of ways to hide messages in plain sight. You might consider [writing messages using invisible ink](https://en.wikipedia.org/wiki/Invisible_ink). Or you can learn sign language, which many people still don't understand. Chances are that no one will get your message... unless someone knows how to get it.

Cryptography is the field of study that considers ways of encrypting messages into _other messages_ that aren't as easy to read. Such methods have been in use since at least the era of [classical antiquity](https://en.wikipedia.org/wiki/History_of_cryptography) (one notable method is the subject of the extra assignment).

One way of encrypting messages is by applying a **cypher**, i.e. substituting letters by different letters in a systematic fashion. The algorithm that you're going to implement is composed of two different cyphers:

1. Replace _each letter_ in the text with matching letters on the other end of the alphabet. For example, the letter `a` might be replaced with `z` and `b` with `y`.

2. Switch each letter's _casing_: i.e. any lowercase letters will be uppercased in the output, and any uppercase letters will be lowercased.

Implementing this cypher as a C program will yield output as per the example above. And note that your program must be able to show the output in lowercase, too, per the `-l` flag that might be added to the command line.

## Specification

Design and implement a program, `cypher`, that encrypts messages using the cypher described above.

- Implement your program in a file called `cypher.c`.
- Your program must output `plaintext:` (without a newline) and then prompt the user for a `string` of plaintext (using `get_string`).
- Your program must output `cyphertext:` (without a newline) followed by the plaintext's corresponding cyphertext.
- After outputting cyphertext, you should print a newline. Your program should then exit by returning `0` from `main`.
- Your program must accept an optional command-line argument `-l` that forcibly prints the result in all lowercase letters.

## Getting Started

- Use a strategy of changing strings "in-place". This means that you store an input string in a variable, and then you consider each character in the string, changing it when applicable.

  For example, to change every character in a string by `'a'`, you can use:

      for(int pos = 0; pos < strlen(s); pos++)
      {
          s[pos] = 'a';
      }

  As soon as you have made all necessary changes, you can then display the string to your user using `printf`.

- To compare two strings you cannot do `str1 == str2`. Instead, you must use `strcmp`. See the man page for more information.

- Take care to design the different steps of your program by sketching it out and writing pseudocode! This will help you understand the problem better.

## How to test your code

Execute the below to evaluate the correctness of your code using `check50`. But be sure to compile and test it yourself as well!

    check50 -l minprog/checks/2022/cypher

Execute the below to evaluate the style of your code using `style50`.

    style50 cypher.c
