//WACP TO FIND THE MAXIMUM AND MINIMUM ELEMENT OF A MATRIX USING POINTER.

#include <stdio.h>

int main() {
    int matrix[2][2] = {{1, 9}, {3, 4}};
    int rows = 2, cols = 2;
    int *ptr = &matrix[0][0];
    int max = *ptr;
    int min = *ptr;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value = *(ptr + i * cols + j);
            if (value > max) {
                max = value;
            }
            if (value < min) {
                min = value;
            }
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}