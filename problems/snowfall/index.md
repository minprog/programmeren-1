# Snowfall

Implement, in a file called `snowfall.c`, an animated snowfall simulation in C using ANSI escape codes. The goal is to create a visually appealing animation with falling snowflakes that accumulate at the bottom of the screen.

To make an animation, imagine a "scene" of 80 characters wide and 40 characters deep. Snowflakes (a `*` character on the screen) appear at the top of this scene every now and then. Every N milliseconds all snowflakes fall one step towards the bottom.

We define those N milliseconds as a "timestep". Every timestep you:

- update the scene internally
- clear the screen
- draw the scene to the screen

Updating the scene has several aspects:

- new snowflakes are added every X timesteps
- they appear at random positions at the top
- when a snowflake reaches the bottom of the screen, it stays there
- when a snowflake is on top of another snowflake, it stays there

As you might imagine, the screen should slowly fill with snow as the animation progresses!

## The scene

To represent the scene internally, use a 2-dimensional array, like the board in [Tiles](/problems/tiles_single). The scene is 40 rows deep and 80 columns wide, and each spot is either empty or holds a snowflake:

    #define HEIGHT 40
    #define WIDTH 80

    bool scene[HEIGHT][WIDTH];

So `scene[row][column]` is `true` where there is a snowflake. Note that the row comes first.

## Functions

Write at least these three functions, so that each part of a timestep is its own function:

    void add_flake(bool scene[HEIGHT][WIDTH]);
    void fall(bool scene[HEIGHT][WIDTH]);
    void draw_scene(bool scene[HEIGHT][WIDTH]);

- `add_flake` adds one new snowflake in the top row (row 0), at a random column.

- `fall` moves every snowflake one row down. A snowflake that has reached the bottom row, or that lies on top of another snowflake, stays where it is. Watch out: while you loop over the scene you are also changing it, so it's easy to move the same snowflake twice in one timestep. The assignment [Satellite](/problems/satellite) explains this pitfall under "Let op met in-place aanpassingen".

- `draw_scene` prints the whole scene, using a `*` for a snowflake and a space for an empty spot.

Clear the screen by printing the ANSI escape code `\033[2J`, like `clear_screen` does in [Tiles](/problems/tiles_single). Don't use `system("clear")`.

Beyond these three functions you are completely free: write as many other functions as you like, keep extra information in extra arrays, and decorate the animation however you want.

Feel free to make the animation more realistic as you see fit. Colours, wind, snowflakes of different sizes: all of that is fine, as long as the three functions above keep working as described.
