# Hello

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

Now, open Atom, point to the File menu and choose New. This will open a new editor with a blank "Untitled1" file in it. First thing to do is to give it a name and save it into your new directory. Press **CTRL-S** or **Cmd-S** to open the file dialog. For **Filename**, type `hello.c`. Then below, choose (click) the `Documents`, then the `Programming` folder that you just created and click on **Save**.

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

Now, open Atom, point to the File menu and choose New. This will open a new editor with a blank "Untitled1" file in it. First thing to do is to give it a name and save it into your new directory. Press **CTRL-S** or **Cmd-S** to open the file dialog. For **Filename**, type `hello.c`. Then below, choose (click) the `Documents`, then the `Programming` folder that you just created and click on **Save**.

In your new file, type the C code for "Hello, World" as seen above. Save it once more.


## Listing files

Next, type precisely the below (in lowercase), then hit Enter:

    ls

You should see just `Makefile` and `hello.c`. That's because you've just listed the files in that same folder, this time using a command-line interface (CLI), using just your keyboard, rather than the graphical user interface (GUI) represented by that folder icon. In particular, you *executed* (i.e., ran) a command called `ls`, which is shorthand for "list." (It's such a frequently used command that its authors called it just `ls` to save keystrokes.) Make sense?


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

Now execute the below to compile your program one last time.

    make hello

You should see that `make` executes `clang` with even more command-line arguments for you? More on those, too, another time!

Now execute the program itself one last time by executing the below.

    ./hello

Phew!

> Are you fully satisfied that everything works correctly? Then you're ready to proceed to the next module. Is anything still awry? Then do ask for help! The course's staff is ready to help you sort out your thoughts and knows how to find the right information at the right time.
