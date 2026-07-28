//WACP TO PRINT THE MAXIMUM AND MINIMUM NUMBER AMONG THREE NUMBERS USING NESTED IF-ELSE LOGIC.
#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max, min;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Nested if-else logic to find the MAXIMUM number
    if (num1 >= num2) {
        if (num1 >= num3) {
            max = num1;
        } else {
            max = num3;
        }
    } else {
        if (num2 >= num3) {
            max = num2;
        } else {
            max = num3;
        }
    }

    // Nested if-else logic to find the MINIMUM number
    if (num1 <= num2) {
        if (num1 <= num3) {
            min = num1;
        } else {
            min = num3;
        }
    } else {
        if (num2 <= num3) {
            min = num2;
        } else {
            min = num3;
        }
    }

    // Printing the final results
    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);

    return 0;
}
