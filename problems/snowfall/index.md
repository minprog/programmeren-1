# Snowfall

Implement an animated snowfall simulation in C using ANSI escape codes. The goal is to create a visually appealing animation with falling snowflakes that accumulate at the bottom of the screen.

1. **Staggered Snowflakes:**
   - Modify the program to generate a new snowflake every X timesteps. You can control the appearance rate by adjusting the `NEW_SNOWFLAKE_DELAY` constant.

2. **Accumulation at the Bottom:**
   - Make sure that when a snowflake reaches the bottom of the screen, it stays there. Adjust the program so that snowflakes accumulate at the bottom.

3. **Random Initial Positions:**
   - Ensure that each snowflake starts at a random position at the top of the screen. You can achieve this by initializing the snowflake positions appropriately.

4. **Animation and Clearing:**
   - Use ANSI escape codes to create a smooth animation. The screen should simply be cleared between frames, and snowflakes should be redrawn at their updated positions.
