# Game of Life

Implement, in a file called `game_of_life.c`, an animated version of Conway's Game of Life in C, using ANSI escape codes. The Game of Life is a cellular automaton devised by mathematician John Conway: a grid of cells that live and die according to a handful of very simple rules, out of which surprisingly complicated behaviour emerges.

## The world

To represent the world internally, use a 2-dimensional array, like the board in [Tiles](/problems/tiles_single). The world is 40 rows deep and 80 columns wide, and each cell is either alive or dead:

    #define HEIGHT 40
    #define WIDTH 80

    bool world[HEIGHT][WIDTH];

So `world[row][column]` is `true` where a cell is alive. Note that the row comes first.

## The rules

Every generation, count for each cell how many of its neighbours are alive: the up to eight cells directly around it, horizontally, vertically and diagonally. A cell is not its own neighbour. Then:

- a living cell with fewer than two living neighbours dies (underpopulation)
- a living cell with two or three living neighbours stays alive
- a living cell with more than three living neighbours dies (overpopulation)
- a dead cell with exactly three living neighbours comes to life (reproduction)

> What happens at the edges of the world is up to you. You can treat everything outside the world as dead, or you can let the world wrap around, so that a cell in the last column is a neighbour of a cell in the first column.

## Functions

Write at least these two functions, so that each part of a generation is its own function:

    void next_generation(bool world[HEIGHT][WIDTH]);
    void draw_world(bool world[HEIGHT][WIDTH]);

- `next_generation` advances the world by one generation: after the call, `world` holds the new generation.

- `draw_world` prints the whole world, using a `#` for a living cell and a space for a dead cell.

## The animation

Every N milliseconds you:

- clear the screen
- draw the world
- compute the next generation

Clear the screen by printing the ANSI escape code `\033[2J`, like `clear_screen` does in [Tiles](/problems/tiles_single). Don't use `system("clear")`. Keep the animation running until the user stops it with ctrl-c.

Start from an "interesting" configuration: not an empty world, and not a configuration that never changes. A glider, a blinker, or a handful of well-known patterns spread over the world all work nicely. Look a few of them up!

Beyond these two functions you are completely free: write as many other functions as you like, and decorate the animation however you want. Colours, a border around the world, a generation counter: all of that is fine, as long as the two functions above keep working as described.
