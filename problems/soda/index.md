# Soda

Implement a payment processor for a soda vending machine:

    $ ./soda
    50 cents owed
    Insert coin: 25
    25 cents owed
    Insert coin: 25
    0 cents change

    $ ./soda
    50 cents owed
    Insert coin: 10
    40 cents owed
    Insert coin: 25
    15 cents owed
    Insert coin: 25
    10 cents change

    $ ./soda
    50 cents owed
    Insert coin: 10
    40 cents owed
    Insert coin: 30
    40 cents owed
    Insert coin: 25
    15 cents owed
    Insert coin: 5
    10 cents owed
    Insert coin: 10
    0 cents change

## Background

On the surface a soda vending machine is a relatively simple machine. You enter what you want, you insert coins until the required amount is met, and then with a bit of luck the machine will deliver. However as with any real world application, there are real world problems too. Soda's getting stuck upon delivery (and resulting machine abuse), users inserting fake coins, power outages...

Let's focus on the payment aspect of a vending machine. For this there needs to be some form of coin detection. Then some kind of processing where the machine tracks the price of the item and the value of the coins entered so far. And finally, there is a user that wants to be informed of all this.

In this assignment it is up to you to implement this coin processing unit for a soda vending machine. Not to worry, we will abstract away a bit of the real world. There is no need to read up on any type of coin forgery just yet.

## Assignment

Write a program that processes coins for a soda vending machine in a file called `soda.c`. The program should prompt the user for coins until the required amount of 50 cents is met. Until that time the program should update the user with whatever amount is still required. Once enough coins are inserted, the program should show the change owed to the user.

- Assume the user will only enter integers as coins.
- The machine should only accept coins of 25, 10 and 5 cents. Any other coins should be ignored.
- Each bottle of soda costs 50 cents, no need for user input here.

## Specification

Implement the soda program as per the example outputs above. Pay special attention to the order of prints and user input. Note that the program always starts by printing:

    50 cents owed

Then the program asks for input:

    Insert coin: ...

And finally the program prints either:

    ... cents owed

Or:

    ... cents change

## Tips

- The user will repeatedly have to enter input. This means you will probably want to use some kind of loop in your program. Think about what type of loop to use and when you want this loop to stop.

- You can combine conditions with logical symbols such as `||` (or) and `&&` (and). That way you can check for multiple conditions within one if-statement or while-loop.

## Testing

First, test your program manually by `make`ing and running it with various forms of input:

    $ make soda
    $ ./soda
    ...

Once confident, check your code with `check50` as follows:

    check50 -l minprog/checks/2022/soda

Before you hand in your solution, also check for obvious style mistakes using `style50`. But don't overdo it. You'll be doing a code review again next week.
