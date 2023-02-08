# Hello, you!

Here's your first C program:

    #include <stdio.h>

    int main(void)
    {
        printf("hello, world\n");
    }

You have seen it in lecture, and now you're ready to try running it yourself.


## Dive into your development environment

### Instructions for Mac OS

Go to your Terminal. You should find that its "prompt" resembles the below.

    jharvard@somewhere ~ %

Here on out, to execute (i.e., run) a command means to type it into a terminal window and then hit Enter. Commands are "case-sensitive," so be sure not to type in uppercase when you mean lowercase or vice versa.

Now execute

    cd ~/Documents/Programming/

to move yourself into (i.e., open) that directory. Your prompt should now resemble the below.

    jharvard@somewhere Programming %

If not, retrace your steps and see if you can determine where you went wrong.

Now, open your code editor, point to the File menu and choose New. This will open a new editor with a blank "Untitled1" file in it. First thing to do is to give it a name and save it into your new directory. Press **CTRL-S** or **Cmd-S** to open the file dialog. For **Filename**, type `hello.c`. Then below, choose (click) the `Documents`, then the `Programming` folder that you just created and click on **Save**.

In your new file, type the C code for "Hello, World" as seen above. Save it once more.

### Instructions for Windows

Go to your Terminal. You should find that its "prompt" resembles the below.

    jharvard@COMPUTER:~$

Here on out, to execute (i.e., run) a command means to type it into a terminal window and then hit Enter. Commands are "case-sensitive," so be sure not to type in uppercase when you mean lowercase or vice versa.

Now execute

    cd /mnt/c/Users/<Windows User Name>/Documents/Programming/

to move yourself into (i.e., open) that directory. Your prompt should now resemble the below.

    jharvard@COMPUTER:Programming$

If not, retrace your steps and see if you can determine where you went wrong.

Now, open your code editor, point to the File menu and choose New. This will open a new editor with a blank "Untitled1" file in it. First thing to do is to give it a name and save it into your new directory. Press **CTRL-S** or **Cmd-S** to open the file dialog. For **Filename**, type `hello.c`. Then below, choose (click) the `Documents`, then the `Programming` folder that you just created and click on **Save**.

In your new file, type the C code for "Hello, World" as seen above. Save it once more.


## Listing files

Next, type precisely the below (in lowercase), then hit Enter:

    ls

You should see just git `hello.c`. That's because you've just listed the files in that same folder, this time using a command-line interface (CLI), using just your keyboard, rather than the graphical user interface (GUI) represented by that folder icon. In particular, you *executed* (i.e., ran) a command called `ls`, which is shorthand for "list." (It's such a frequently used command that its authors called it just `ls` to save keystrokes.) Make sense?


## Compiling programs

Now, before we can execute the program at right, recall that we must *compile* it with a *compiler* (e.g., `clang`), translating it from *source code* into *machine code* (i.e., zeroes and ones). Execute the command below to do just that:

    clang hello.c

And then execute this one again:

    ls

This time, you should see not only `hello.c` but `a.out` listed as well? (You can see the same graphically if you click that folder icon again.) That's because `clang` has translated the source code in `hello.c` into machine code in `a.out`, which happens to stand for "assembler output," but more on that another time.

Now run the program by executing the below.

    ./a.out

Hello, world, indeed!


## Naming programs

Now, `a.out` isn't the most user-friendly name for a program. Let's compile `hello.c` again, this time saving the machine code in a file called, more aptly, `hello`. Execute the below.

    clang -o hello hello.c

Take care not to overlook any of those spaces therein! Then execute this one again:

    ls

You should now see not only `hello.c` (and `a.out` from before) but also `hello` listed as well? That's because `-o` is a *command-line argument*, sometimes known as a *flag* or a *switch*, that tells `clang` to output (hence the `o`) a file called `hello`. Execute the below to try out the newly named program.

    ./hello

Hello there again!


## Making things easier

Recall from lecture that we can automate the process of executing `clang`, letting `make` figure out how to do so for us, thereby saving us some keystrokes.

The installer tool can create a `Makefile` for you in your `Programming` directory. So run the installer once more and choose option 2 this time.

    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/uvapl/installer/main/run.sh)"

Now execute the below to compile your program one last time.

    make hello

You should see that `make` executes `clang` with even more command-line arguments for you? More on those, too, another time!

Now execute the program itself one last time by executing the below.

    ./hello

Phew! Now let's make your program a bit more interactive.

## Specification: getting user input

No matter how you compile or execute the program, it only ever prints `hello, world`. Let's personalize it a bit, just as we did in class.

Modify this program in such a way that it first prompts the user for their name and then prints `hello, so-and-so`, where `so-and-so` is their actual name.

> <svg class="bi" width="24" height="24" fill="currentColor" size="24x24" style="svertical-align:-0.255em; float:left; margin-right:0.75rem;"><use xlink:href="/icons/bootstrap-icons.svg#info-circle"></use></svg>
>
> David's Lecture 1 should help you find the right commands to include in your code. This is often the case: lectures include many examples of working code, along with an explanation of the inner workings, which should help you get started on some of the parts of an assignment.
> {:.bg-light}

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

Recall that you can use `get_string` as follows, storing its _return value_ in a variable called `name` of type `string`.

    string name = get_string("What is your name?\n");

#### Don't recall how to format a string?

Don't recall how to join (i.e., concatenate) the user's name with a greeting? Recall that you can use `printf` not only to print but to format a string (hence, the `f` in `printf`), a la the below, wherein `name` is a `string`.

    printf("hello, %s\n", name);

#### Use of undeclared identifier?

Seeing the below, perhaps atop other errors?

    error: use of undeclared identifier 'string'; did you mean 'stdin'?

Recall that, to use `get_string`, you need to include `cs50.h` (in which `get_string` is _declared_) atop a file, as with:

    #include <cs50.h>

## Testing

To verify whether your program is indeed running according to the specification, you may use `check50` in the Terminal. Make sure that your Terminal is still pointing towards the directory that your `hello.c` resides in!

    check50 -l minprog/checks/2022/hello
