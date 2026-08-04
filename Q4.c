// WACP to print the elements and their addresses of an array
// in forward and backward direction using pointer.

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int *ptr;

    ptr = arr;

    printf("Forward Direction\n");
    for (int i = 0; i < n; i++) {
        printf("Element: %d | Address: %p\n", *ptr, ptr);
        ptr++;
    }

    ptr--;

    printf("\nBackward Direction\n");
    for (int i = 0; i < n; i++) {
        printf("Element: %d | Address: %p\n", *ptr, ptr);
        ptr--;
    }

    return 0;
}