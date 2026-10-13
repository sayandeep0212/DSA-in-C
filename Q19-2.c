
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push() {
    struct node *nw;
    int x;

    nw = (struct node *)malloc(sizeof(struct node));

    if (nw == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter the element: ");
    scanf("%d", &x);

    nw->data = x;
    nw->next = top;
    top = nw;

    printf("Element %d inserted successfully.\n", x);
}

void pop() {
    struct node *temp;

    if (top == NULL) {
        printf("Stack Underflow! Stack is empty.\n");
    } else {
        temp = top;
        printf("Element %d deleted successfully.\n", top->data);

        top = top->next;
        free(temp);
    }
}

void display() {
    struct node *temp;

    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        temp = top;

        printf("Elements of the stack (top to bottom):\n");

        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    int choice;

    do {
        printf("\nSTACK USING LINKED LIST\n");
        printf("1. Insert (PUSH)\n");
        printf("2. Delete (POP)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            break;
        }

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program terminated.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    while (top != NULL) {
        struct node *temp = top;
        top = top->next;
        free(temp);
    }

    return 0;
}
