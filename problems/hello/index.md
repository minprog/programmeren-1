# Hello, you!

This was your first C program:

    #include <stdio.h>

    int main(void)
    {
        printf("hello, world\n");
    }

Now let's make it a bit more interactive.


## Specification: getting user input

No matter how you compile or execute the program, it only ever prints `hello, world`. Let's personalize it a bit, just as we did in class.

Modify this program in such a way that it first prompts the user for their name and then prints `hello, so-and-so`, where `so-and-so` is their actual name.

> <svg class="bi" width="24" height="24" fill="currentColor" size="24x24" style="svertical-align:-0.255em; float:left; margin-right:0.75rem;"><use xlink:href="/icons/bootstrap-icons.svg#info-circle"></use></svg>
>
> David's Lecture 1 should help you find the right commands to include in your code. This is often the case: lectures include many examples of working code, along with an explanation of the inner workings, which should help you get started on some of the parts of an assignment.
{:.bg-light}

As before, be sure to compile your program with:

    make hello

And be sure to execute your program, testing it a few times with different inputs, with:

    ./hello


## Walkthrough

<div markdown="1" class="extend">
[![](hello.jpg)](https://www.youtube.com/watch?v=wSk1KSDUEYA)
</div>

[Open video on Youtube](https://www.youtube.com/watch?v=wSk1KSDUEYA)


## Hints

#### Don't recall how to prompt the user for their name?

Recall that you can use `get_string` as follows, storing its *return value* in a variable called `name` of type `string`.

    string name = get_string("What is your name?\n");

#### Don't recall how to format a string?

Don't recall how to join (i.e., concatenate) the user's name with a greeting? Recall that you can use `printf` not only to print but to format a string (hence, the `f` in `printf`), a la the below, wherein `name` is a `string`.

    printf("hello, %s\n", name);

#### Use of undeclared identifier?

Seeing the below, perhaps atop other errors?

    error: use of undeclared identifier 'string'; did you mean 'stdin'?

Recall that, to use `get_string`, you need to include `cs50.h` (in which `get_string` is *declared*) atop a file, as with:

    #include <cs50.h>

## Testing

To verify whether your program is indeed running according to the specification, you may use `check50` in the Terminal. Make sure that your Terminal is still pointing towards the directory that your `hello.c` resides in!

    check50 -l minprog/cs50x/2020/hello
