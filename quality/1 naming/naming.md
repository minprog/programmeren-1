# Naming

Take your time to choose clear names for your variables that state **intent** (the conscious idea behind your code) and make programmers, including you, understand your code more easily. There is a trade-off, however, between short names, which take less time to type and understand, and longer names, which can explain a bit more about the intent. It is often hard to invent a short name that intuitively describes what a variable represents, but it is worth the effort. If you're adding a couple of values, for instance, you might call your variable `sum`.

## Conventions

If your variable's name consists of two words (e.g., `is_ready`), put an underscore between them, a
convention used in C programs. And, don't start your variable's name with an uppercase letter!

When declaring multiple variables of the same type at once, it's fine to declare them together, as in:

	int quarters, dimes, nickels, pennies;

Just don't initialize some but not others, because it's immediately confusing:

	int quarters, dimes = 0, nickels = 0, pennies;

## Loops

When writing loops, you might be tempted to use sequential variable names like `a`, `b` and `c`. However, in many cases it must be possible to think of a name that aptly describes the idea behind the variable.

If there is no name available, you could opt to use the names `i`, `j`, and `k`. Historically, these are names for loop variables and any programmer will recognize those letters as "they couldn't think of a better name"! Suffice it to say that even this is not a great idea.

	for (int i = 0; i < LIMIT; i++)
	{
	    for (int j = 0; j < LIMIT; j++)
	    {
	        for (int k = 0; k < LIMIT; k++)
	        {
	            // do something
	        }
	    }

	    for (int j = 0; j < LIMIT; j++)
	    {
	        // do something
		}
	}

Oh, and if you need more than three variables for iteration, it might be time to rethink your design.

# Magic numbers

You might find that there is a magic number, like 67, that makes your code work quite alright. And when you discover this "magic" number, you probably understand why it does work and how to change it for a different situation. However, shortly after writing the program, you will most likely forget what it is you were thinking! (Given the assignments you were probably thinking about the character `'C'`.) Needless to say, throwing magic numbers around in your code will absolutely confuse other programmers and yourself. That's why you should at least document these numbers in comments, but whenever possible, simply give them a name. For instance, change:

    if (strlen(name) < 20)
    {
        // do something
    }

to

    // 20 is the maximum size for names that the database supports
    if (strlen(name) < 20)
    {
        // do something
    }

Alternatively, and perhaps better in case we find our magic number `20` scattered throughout our code, is to use a constant variable like so:

    #define DB_NAME_LENGTH 20

    if (strlen(name) < DB_NAME_LENGTH)
    {
        // do something
    }

Here we introduced a constant `DB_NAME_LENGTH`. By convention, you'll typically find `ALL_CAPS_NAMES` for constant variables. Apart from making your code easier to understand, this approach also makes your code easier to change. Because now if we'd ever want to increase the maximum number of characters for a name, all we'd need to do is change the value of `DB_NAME_LENGTH` atop the program. That's just place to keep track of. Hadn't we introduced this name, we would have to find every single line of code containing the number 20 and check if it is indeed the 20 length. What would happen if you miss one?
