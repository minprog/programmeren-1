# Hello, you!

Here's your first C program:

    #include <stdio.h>

    int main(void)
    {
        printf("hello, world\n");
    }

In your editor, create a file called `hello.c` and save it in the `Programming` directory. Add the code from above and save again. Now open your terminal and navigate to the same directory (the first line is for macOS, the second for Windows):

    cd ~/Documents/Programming/
    cd /mnt/c/Users/<Windows User Name>/Documents/Programming/

Now make your program and run it. The first command should not give any errors, but if it does, discuss with your peers and ask for help.

    make hello
    ./hello

Does the program print the message correctly? Nice.

## Adding functionality

No matter how you compile or execute the program, it only ever prints `hello, world`. Let's personalize it a bit, just as we did in lecture.

Modify this program in such a way that it first prompts the user for their name and then prints `hello, so-and-so`, where `so-and-so` is their actual name.

> <svg class="bi" width="24" height="24" fill="currentColor" size="24x24" style="svertical-align:-0.255em; float:left; margin-right:0.75rem;"><use xlink:href="/icons/bootstrap-icons.svg#info-circle"></use></svg>
>
> David's Lecture 1 should help you find the right commands to include in your code. This is often the case: lectures include many examples of working code, along with an explanation of the inner workings, which should help you get started on some of the parts of an assignment.

When you're done, try it out! And then submit your solution.
