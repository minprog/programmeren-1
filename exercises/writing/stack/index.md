# Stack

This is your last assignment in C! It's all about **abstract data types**. What are those? Well, let's take a look at types of data that we have seen so far:

- C has many built-in **data types** such as `int`, `float` and "pointer".

- C also has some data types that you can use to manage **collections** of data:

    - For structs, you have to specify which fields are in it and what types those fields have. The number of fields and their names and types are fixed.

    - For arrays, you specify just a single type, because each element in an array has the same type. You have to known in advance how many entries you will need.

- Using all of these built-in data types, we can create our own **dynamic data structures**, which can be designed to work well with certain algorithms (like a well-designed hash table structure that will make a dictionary lookup function *very* fast).

There are many dynamic data structures of many forms, and many of these structures are well-known and have been for decades. People have been designing data structures and algorithms since the dawn of the computing era in the 1950s.

An **abstract data type** is a simple description of some data type, not in terms of how it works, but in terms of how you can **use** it. When we describe an abstract data type, we specify the basic building blocks (like in Scratch) that would be available when we implement the data type in actual code. These are called **operations**. The type is called abstract because no implementation details are enforced.

## Lists

Earlier, you have seen linked lists in C. A linked list is a **concrete** implementation of the **list** abstract data type, which can be defined as a "container that has some number of ordered values in it". It supports some or all of the following operations:

- **empty**, checking if a list is empty
- **prepend**, prepending some value to the list
- **append**, appending some value to the list
- **remove**, removing the first value from the list
- **size**, retrieving the number of values in the list

And that's all that we need to define the abstract data type of list. We do not specify that it is implemented using nodes and pointers, just that it supports a number of operations. In fact, lists can also be implemented in programming languages that do not support pointers at all. Many programming languages even provide lists as a built-in data type.

As an aside, you might think from the definition "container that has some number of ordered values in it" that an array also conforms to the list abstract data type. However, arrays cannot change in size, which is an essential property of the list type.

## Stacks

Stacks are simplified lists that support two operations very efficiently:

- **push**, which inserts one value into the stack
- **pop**, which removes the last-inserted value from the stack

These are the core operations for a stack. Why these? Think of a stack of plates on a table. If you're asked to get one plate, you would usually take the top-most plate, right? Assuming that they are all nice and clean, of course.

This analogy is very appropriate, but it is not the *reason* that stacks exist. They exist because the idea of a stack has proven to be very useful in many algorithms (and unfortunately there's also a common error associated with this structure: the 'stack overflow', which happens if a stack has limited space and it gets full).

Back to the stack itself. Although push and pop are essential, stacks often support a few more operations:

- **create**, which creates a new stack **instance**, separate from any other instances
- **destroy**, which completely removes all items in the stack, and the stack itself

These operations enable you to create multiple stacks (instances) in a running program and destroy them again. This is useful in applications where you do not know in advance how many stacks you're going to need. And finally, we have:

- **size**, which returns the number of items in the stack

This operation is commonly defined for collection data types.

## Building a stack

Download the starter file: [`stack.c`](stack.c).

We're now going to build a Stack in C. Let's start with the `node` type that we're going to use as a building block. It's the same as the node that we used for linked lists (and that is to be expected, because a stack is a kind of list, right?). For this assignment, we will store single integers in the list. Have a look:

    // number node type
    typedef struct node
    {
        int number;
        struct node* next;
    } node;

What we're going to add this time is a **root node type**. In earlier assignments, the root was always some kind of plain variable (it was a single pointer in the "Linked list" assignment, and a full array of pointers in "Speller"). By adding a root node type, we can dynamically create and delete stacks! All we need is this:

    // root node type
    typedef struct stack
    {
        struct node* root;
        int size;
    } stack;

Notice two things:

- The root node type is **not** self-referential like the number node type is. It just exists to store a pointer to the first element in the stack (or none, if it is empty).

- We add a field called `size`, which will store the number of values that is in the stack at any time. This will save us counting each value separately when the size is requested. Keeping track of such a value separately is called "memoization".

You can now create a "stack" by allocating memory for the root node:

    struct stack* stack = malloc(sizeof(struct stack));
    stack->root = NULL;
    stack->size = 0;

When the `root` and `size` are set to a null value, the stack is completely valid: it does not contain any elements, it's size is 0 and the root points to `NULL`. It's all very consistent!


## What to do

Implement the following functions:

    struct stack* create      ();
             void push        (struct stack* stack, int number);
              int pop         (struct stack* stack);
             void destroy     (struct stack* stack);
             void print_stack (struct stack* stack);

Observe the following details:

- The function names specify the **operations** that the stack data type must support. Implementing each of those makes the stack work according to specifications.

- The return types are `void`, except for `create()`, which returns a pointer to a new stack, and `pop()`, which actually extracts a single value from the stack.

- Each function requires, as a parameter, the pointer to a stack that you would like to change, except `create`.

Make sure you understand why these return types and parameters are as they are.


## Hints

- `create()` should create (malloc!) a blank stack-type node and return a pointer to it

- `push()` should take a stack and an integer value, and insert the number into the stack. Because each node points toward the next node, your code will be most efficient when you insert a new value at the front!

- `pop()` should take a stack, remove the front-most value from it, and return the integer value (not the node!). Take care to `free` the node before returning.

- `destroy()` should take a stack, `free` any remaining values in it, and also `free` the stack itself.

- `print_stack()` should take a stack and print the values in it. It will be quite similar to the function `print_list()` that you wrote in an earlier exercises! But, remember that the stack itself is *not* the same thing as the first *element* of the stack (earlier, the "list" was simply a pointer to the first element of the list).


## Testing

The distro contains the following `main()` function, which tests some of the functionality:

    int main (void)
    {
        // source array for testing
        int array[] = { 4, 5, 6 };
        int n = sizeof(array)/sizeof(int);

        // create a blank stack
        struct stack *stack = create();

        // fill stack from source array
        for (int i = 0; i < n; i++) {
            push(stack, array[i]);
        }

        print_stack(stack);

        // remove one element (should be the one that's been added most recently)
        int num = pop(stack);

        printf("removed with pop: %d\n", num);
        printf("size is now: %d\n", stack->size);

        destroy(stack);
    }

Use the testing code in two ways:

1. Implement the function in such a way that this test code executes correctly.

2. Check using valgrind that your program doesn't leave a single trace in memory when finished.


## Submit

Below, submit your complete and working implementation of `stack.c`.
