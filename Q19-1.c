
#include <stdio.h>
#define SIZE 4

int top = -1;

void push(int arr[]) {
    int x;

    if (top == SIZE - 1) {
        printf("Stack Overflow! Stack is full.\n");
    } else {
        printf("Enter the element: ");
        scanf("%d", &x);

        top++;
        arr[top] = x;

        printf("Element %d inserted successfully.\n", x);
    }
}

void pop(int arr[]) {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty.\n");
    } else {
        printf("Element %d deleted successfully.\n", arr[top]);
        top--;
    }
}

void display(int arr[]) {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Elements of the stack (top to bottom):\n");

        for (int i = top; i >= 0; i--) {
            printf("%d\n", arr[i]);
        }
    }
}

int main() {
    int arr[SIZE];
    int choice;

    do {
        printf("\n--- STACK MENU ---\n");
        printf("1. Insertion (PUSH)\n");
        printf("2. Deletion (POP)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(arr);
                break;

            case 2:
                pop(arr);
                break;

            case 3:
                display(arr);
                break;

            case 4:
                printf("Program terminated.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
