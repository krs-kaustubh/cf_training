#include <stdio.h>
#include <stdbool.h>

#define N 1000
int stack[N];
int top = -1;
int size;

void push(int x) {
    if (top >= size - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

bool pop(int *x) {
    if (top < 0) {
        printf("Stack underflow\n");
        return false;
    }
    *x = stack[top--];
    return true;
}

bool peek(int *x) {
    if (top < 0) {
        printf("Stack is empty\n");
        return false;
    }
    *x = stack[top];
    return true;
}

bool isEmpty() {
    if (top == -1) {
        return true;
    }
    return false;
}

bool isFull() {
    if (top == size - 1) {
        return true;
    }
    return false;
}

void clearStack() {
    top = -1;
}

int getSize() {
    return top + 1;
}

int main() {
    // take size of stack from user
    printf("Enter size of stack: ");
    scanf("%d", &size);

    if (size > N) {
        printf("Size exceeds maximum limit of %d\n", N);
        return 1;
    }

    // making switch case menu for stack operations using do while loop
    int choice, value;
    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if stack is empty\n");
        printf("5. Check if stack is full\n");
        printf("6. Print stack\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                if (pop(&value)) {
                    printf("Popped value: %d\n", value);
                }
                break;
            case 3:
                if (peek(&value)) {
                    printf("Top value: %d\n", value);
                }
                break;
            case 4:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack is not empty\n");
                }
                break;
            case 5:
                if (isFull()) {
                    printf("Stack is full\n");
                } else {
                    printf("Stack is not full\n");
                }
                break;
            case 6:
                if (isEmpty()) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack elements: ");
                    for (int i = top; i >= 0; i--) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
            } 
    } while (choice != 7);
}
