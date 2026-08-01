// codeforces problem 188H Stack
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int stack[20];
int top = -1, size = 20;

void push(int x)
{
    if (top >= size - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

bool pop(int *x)
{
    if (top < 0)
    {
        printf("Stack underflow\n");
        return false;
    }
    *x = stack[top--];
    return true;
}

bool peek(int *x)
{
    if (top < 0)
    {
        printf("Stack is empty\n");
        return false;
    }
    *x = stack[top];
    return true;
}

bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if (top == size - 1)
    {
        return true;
    }
    return false;
}

void clearStack()
{
    top = -1;
}

int getSize()
{
    return top + 1;
}

int main()
{
    char buffer[20];
    while (scanf("%s", buffer) == 1)
    {
        if (buffer[0] == '+' || buffer[0] == '*')
        {
            int a, b, c;
            if (pop(&b) && pop(&a))
            {
                if (buffer[0] == '+')
                {
                    c = a + b;
                }
                else
                {
                    c = a * b;
                }
                push(c);
            }
        }
        else
        {
            int x = atoi(buffer);
            push(x);
        }
    }

    int result;
    if (pop(&result))
    {
        printf("Result: %d\n", result);
    }
    else
    {
        printf("Error: Stack is empty\n");
    }

    return 0;
}