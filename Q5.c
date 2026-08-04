// WACP to print the elements and their addresses of a 2D array
// in forward and backward direction using pointer.

#include <stdio.h>

int main() {
    int arr[2][2] = {{10, 20}, {40, 50}};
    int rows = 2;
    int cols = 2;
    int *ptr;

    ptr = &arr[0][0];

    printf("Forward Direction\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element: %d | Address: %p\n", *ptr, ptr);
            ptr++;
        }
    }

    ptr--;

    printf("\nBackward Direction\n");
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 0; j--) {
            printf("Element: %d | Address: %p\n", *ptr, ptr);
            ptr--;
        }
    }

    return 0;
}