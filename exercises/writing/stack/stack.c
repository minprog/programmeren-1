#include <stdio.h>
#include <stdlib.h>

// number node type
typedef struct node
{
    int number;
    struct node* next;
} node;

// root node type
typedef struct stack
{
    struct node* root;
    int size;
} stack;

// prototypes
struct stack* create();
void push(struct stack* stack, int number);
int pop(struct stack* stack);
void destroy(struct stack* stack);
void print_stack(struct stack* stack);

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

// TODO implement everything
