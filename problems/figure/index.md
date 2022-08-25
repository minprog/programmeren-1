# Figure

> Samenwerken bij deze opdracht is niet toegestaan; het is prima om medestudenten en anderen om hulp te vragen, als het er maar niet op neerkomt dat iemand anders een deel van het werk voor je doet. Voorbeelden van "redelijke" en "onredelijke" manieren van samenwerken vind je in de studiewijzer.

## Your turn

In the previous assignment, you have created a "pyramid" on-screen, as derived from Super Mario Bros.

But your program cannot just print a single pyramid! Instead, the pyramid is _parametrized_. Your program is able to print quite a few pyramids, all differing in height, and consequently also in width. But the pyramid's **form** is always the same.

To do this, you programmed a general procedure for printing pyramids based on a given height.

And now it is your turn do define a new parametrized figure and implement it as a program. To start, envision a new figure composed of just ASCII characters and define it for various heights.

Here are a few requirements for the assignment:

- The figure must not be a Pyramid, and it mustn't be the same as a figure from lecture.
- Your figure must be defined for at least heights 4, 5, 6, 7 and 8.
- Your program must at least reject non-positive numbers.
- Figures may not be hardcoded: all versions of the figure must be defined using the same set of rules.

## Designing your program

First, create a new directory (i.e., folder) called `figure` inside of your `problems` directory, by executing

    ~/ $ mkdir ~/problems/figure

Add a new file called `design.txt` inside of your `figure` directory.

Write in `design.txt` a couple of examples of the figure that you have in mind. Think about the **form** of the figure, and try to strictly define the figure for a **number of heights**.

As soon as you feel you have a good grasp of what the figure will look like at different heights, try to discover how small you could make the figure that it still looks like the larger versions and is still subject to the same **rules**.

Then, write in `design.txt` some pseudocode that implements this program. Odds are your pseudocode will use (or imply using!) one or more functions, conditions, Boolean expressions, loops, and/or variables.

## Implementing

Now that you have defined the figure in terms of 1) what it looks like and 2) a procedure to print it, you should be able to implement the figure in C!

Create a file called `figure.c` and implement your program. Make sure that it, like `mario.c`, only accepts heights that are _reasonable_ for the figure that you implemented in code.

## How to Test Your Code

Execute the below to evaluate the correctness of your code using `check50`. But be sure to compile and test it yourself as well!

    check50 -l minprog/checks/2022/figure

Check50 cannot check that your figure is printed according to consistent rules, but it will warn you if you have errors or if you do not perform input validation. After submitting, your program will be checked visually for adherence to the requirements.
