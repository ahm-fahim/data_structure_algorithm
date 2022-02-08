#include <stdio.h>

// global variable
#define N 5
int stack[N];
int top = -1;

// push operation
void push(int x)
{
    if (top == N - 1)
    {
        printf("No Space");
    }
    else
    {
        top++;
        stack[N] = x;
    }
}

// pop operation
void pop(int x)
{
    if (top == -1)
    {
        printf("Emty File");
    }
    else
    {
        x = stack[top];
        top--;
    }
}
// peak operation
void peak(int x)
{
    if (top == -1)
    {
        printf("Emty array.");
    }
    else
    {
        printf("%d ", stack[top]);
    }
}

// display operation
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    display();
    return 0;
}