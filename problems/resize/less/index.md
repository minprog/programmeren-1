# Resize

> Samenwerken bij deze opdracht is niet toegestaan; het is prima om medestudenten en anderen om hulp te vragen, als het er maar niet op neerkomt dat iemand anders een deel van het werk voor je doet. Voorbeelden van "redelijke" en "onredelijke" manieren van samenwerken vind je in de studiewijzer.

Implement a program that resizes BMPs, per the below.

    $ ./resize 4 small.bmp large.bmp

## Introduction

![embed](https://www.youtube.com/embed/HmBtQJDiVm8)

## Getting Started

Here's how to download this problem's "distribution code" (i.e., starter code). In a terminal window, execute each of the below.

1. Execute `cd` to ensure that you're in `~/` (i.e., your home directory, aka `~`).
1. Execute `mkdir module4` to make (i.e., create) a directory called `module4` in your home directory.
1. Execute `cd module4` to change into (i.e., open) that directory.
1. Execute `curl -LO https://github.com/minprog/programmeren-1/raw/refs/heads/2026/problems/resize/less/resize.zip` to download a (compressed) ZIP file with this problem's distribution.
1. Execute `unzip resize.zip` to uncompress that file.
1. Execute `rm resize.zip` followed by `yes` or `y` to delete that ZIP file.
1. Execute `ls`. You should see a directory called `resize`, which was inside of that ZIP file.
1. Execute `cd resize` to change into that directory.
1. Execute `ls`. You should see a directory called `less`.
1. Execute `cd less` to change into that directory.
1. Execute `ls`. You should see this problem's distribution, including `bmp.h`, `copy.c`, `large.bmp`, `small.bmp`, and `smiley.bmp`.

## Background

Be sure you're familiar with the structure of 24-bit uncompressed BMPs, as introduced in [Whodunit](/problems/whodunit).

## Specification

Implement a program called `resize` that resizes (i.e., enlarges) 24-bit uncompressed BMPs by a factor of `n`.

* Implement your program in a file called `resize.c` inside of `~/problems/resize/less/`.
* Your program should accept exactly three command-line arguments, whereby

    * the first (`n`) must be a positive integer less than or equal to `100`,
    * the second must be the name of a BMP to be resized, and
    * the third must be the name of the resized version to be written.

    If your program is not executed with such, it should remind the user of correct usage, as with `printf`, and `main` should return `1`.
* Your program, if it uses `malloc`, must not leak any memory. Be sure to call `free`.

## Usage

Your program should behave per the examples below. Assumed that the underlined text is what some user has typed.

    $ ./resize
    Usage: ./resize n infile outfile
    $ echo $?
    1

    $ ./resize 2 small.bmp larger.bmp
    $ echo $?
    0

## Walkthrough

![embed](https://www.youtube.com/embed/zOylgRdzv_U)

## Hints

With a program like this, we could have created `large.bmp` out of `small.bmp` by resizing the latter by a factor of 4 (i.e., by multiplying both its width and its height by 4), per the below.

    ./resize 4 small.bmp large.bmp

You're welcome to get started by copying (yet again) `copy.c` and naming the copy `resize.c`. But spend some time thinking about what it means to resize a BMP. (You may assume that `n` times the size of `infile` will not exceed 2<sup>32</sup> - 1.) Decide which of the fields in `BITMAPFILEHEADER` and `BITMAPINFOHEADER` you might need to modify. Consider whether or not you'll need to add or subtract padding to scanlines. And do be sure to support a value of `1` for `n`, the result of which should be an `outfile` with dimensions identical to `infile`'s.

If you happen to use `malloc`, be sure to use `free` so as not to leak memory. Try using `valgrind` to check for any leaks!

## Testing

If you'd like to peek at, e.g., `large.bmp`'s headers (in a more user-friendly way than `xxd` allows), you may execute the below.

    ~cs50/2019/x/pset3/peek large.bmp

Better yet, if you'd like to compare your outfile's headers against those from the staff's solution, you might want to execute commands like the below. (Think about what each is doing.)

    ./resize 4 small.bmp student.bmp
    ~cs50/2019/x/pset3/resize 4 small.bmp staff.bmp
    ~cs50/2019/x/pset3/peek student.bmp staff.bmp
