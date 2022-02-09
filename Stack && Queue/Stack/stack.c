#include <stdio.h>

#define STACK_MAX 10

typedef struct
{
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item)
{
    if (s->top < STACK_MAX)
    {
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else
    {
        printf("Stack is full!\n");
    }
}

int pop(Stack *s)
{
    int item;

    if (s->top == 0)
    {
        printf("Stack is empty");
        return -1;
    }
    else
    {
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    return item;
}

int main()
{
    Stack my_stack;
    int item;

    my_stack.top = 0;

    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);

    item = pop(&my_stack);
    printf("%d\n", item);
}