# Population Growth

> Bij deze opdracht is het helemaal prima om samen te werken met één of twee medestudenten. Zorg dat je gezamenlijk op één scherm kunt kijken en echt samen het probleem probeert op te lossen. Heeft iemand een goed idee, dan moet die zorgen dat de anderen het ook begrijpen. Uiteindelijk is de bedoeling dat alle samenwerkers evenveel hebben bijgedragen aan de opdracht.

Determine how long it takes for a population to reach a particular size.

    $ ./population
    Start size: 100
    End size: 200
    Years: 9


## Background

Say we have a population of `n` llamas. Each year, `n / 3` new llamas are born, and `n / 4` llamas pass away.

For example, if we were to start with `n = 1200` llamas, then in the first year, `1200 / 3 = 400` new llamas would be born and `1200 / 4 = 300` llamas would pass away. At the end of that year, we would have `1200 + 400 - 300 = 1300` llamas.

To try another example, if we were to start with `n = 1000` llamas, at the end of the year, we would have `1000 / 3 = 333.33` new llamas. We can't have a decimal portion of a llama, though, so we'll truncate the decimal to get `333` new llamas born. `1000 / 4 = 250` llamas will pass away, so we'll end up with a total of `1000 + 333 - 250 = 1083` llamas at the end of the year.


## Getting Started

Copy the "distribution code" (i.e., starter code) from [cdn.cs50.net/2020/fall/labs/1/population.c](https://cdn.cs50.net/2020/fall/labs/1/population.c) into a new file in your IDE called `population.c`.


## Implementation Details

Complete the implementation of `population.c`, such that it calculates the number of years required for the population to grow from the start size to the end size.

*   Your program should first prompt the user for a starting population size.
    *   If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9\. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
*   Your program should then prompt the user for an ending population size.
    *   If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
*   Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
*   Finally, your program should print the number of years required for the llama population to reach that end size, as by printing to the terminal `Years: n`, where `n` is the number of years.


### Walkthrough

[![](walkthrough.jpg)](https://video.cs50.io/dZmtRHHUB1M)

[Open in CS50 video player](https://video.cs50.io/dZmtRHHUB1M)


### Hints

*   If you want to repeatedly re-prompt the user for the value of a variable until some condition is met, you might want to use a `do ... while` loop. For example, recall the following code from lecture, which prompts the user repeatedly until they enter a positive integer.

          int n;
          do
          {
              n = get_int("Positive Integer: ");
          }
          while (n < 1);

    How might you adapt this code to ensure a start size of at least 9, and an end size of at least the start size?

*   To declare a new variable, be sure to specify its data type, a name for the variable, and (optionally) what its initial value should be.

    *   For example, you might want to create a variable to keep track of how many years have passed.

*   To calculate how many years it will take for the population to reach the end size, another loop might be helpful! Inside the loop, you'll likely want to update the population size according to the formula in the Background, and update the number of years that have passed.

*   To print an integer `n` to the terminal, recall that you can use a line of code like

          printf("The number is %i\n", n);

    to specify that the variable `n` should fill in for the placeholder `%i`.


### How to Test Your Code

Your program should behave per the examples below.

    $ ./population
    Start size: 1200
    End size: 1300
    Years: 1

    $ ./population
    Start size: -5
    Start size: 3
    Start size: 9
    End size: 5
    End size: 18
    Years: 8

    $ ./population
    Start size: 20
    End size: 1
    End size: 10
    End size: 100
    Years: 20

    $ ./population
    Start size: 100
    End size: 1000000
    Years: 115

<details markdown="1"><summary markdown="span">Not sure how to solve?</summary>

[![](solving.jpg)](https://video.cs50.io/2CcqQnLbGOE)

[Open in CS50 video player](https://video.cs50.io/2CcqQnLbGOE)
</details>

Execute the below to evaluate the correctness of your code using `check50`. But be sure to compile and test it yourself as well!

    check50 minprog/cs50x/2020/population

Execute the below to evaluate the style of your code using `style50`.

    style50 population.c


## How to submit

As soon as you're done, submit your `population.c` implementation, below! 

1. Toward CS50 IDE's top-left corner, within its "file browser" (not within a terminal window), control-click or right-click your `population.c` file (that's within your `module0` directory) and then select **Download**. You should find that your browser has downloaded `population.c`.

2. Make sure you are signed in to **this** website!

3. In the form below, choose the file that you just downloaded.

4. Press "Submit for grading". Presto!

Your program will then again be checked using `check50` and the result will be recorded on this website. Should the check fail unexpectedly, be sure to try if `check50` is still satisfied when you run it in your IDE's Terminal.
