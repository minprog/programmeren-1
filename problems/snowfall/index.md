# Snowfall

Implement an animated snowfall simulation in C using ANSI escape codes. The goal is to create a visually appealing animation with falling snowflakes that accumulate at the bottom of the screen.

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

To represent the scene internally, use a 2-dimensional array, like the board in [Tiles](/problems/tiles).

Feel free to make the animation more realistic as you see fit.
