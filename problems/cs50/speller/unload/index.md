# Speller: Unload

<div markdown="1" class="extend">
[![](walkthrough.jpg)](https://www.youtube.com/watch?v=qkC4l0pUvCk)
</div>

[Open video on Youtube](https://www.youtube.com/watch?v=qkC4l0pUvCk)

## Hints

Be sure to `free` in `unload` any memory that you allocated in `load`! Recall that `valgrind` is your newest best friend. Know that `valgrind` watches for leaks while your program is actually running, so be sure to provide command-line arguments if you want `valgrind` to analyze `speller` while you use a particular `dictionary` and/or text, as in the below. Best to use a small text, though, else `valgrind` could take quite a while to run.

    valgrind ./speller texts/ralph.txt

If you run `valgrind` without specifying a `text` for `speller`, your implementations of `load` and `unload` won't actually get called (and thus analyzed).

If unsure how to interpret the output of `valgrind`, do just ask `help50` for help:

    help50 valgrind ./speller texts/ralph.txt

