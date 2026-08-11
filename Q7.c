//WACP TO PRINT THE DIAGONAL ELEMENTS OF A 2D ARRAY USING POINTERS

#include <stdio.h>

int main() {
    int arr [2] [2];
    printf("Enter the elements of the 2D array:\n");
    scanf("%d %d", &arr[0][0], &arr[0][1]);
    printf("Enter the elements of the 2D array:\n");
    scanf("%d %d", &arr[1][0], &arr[1][1]);
    printf("The diagonal elements of the 2D array are:\n");
    int rows = 2;
    int cols =2;
    int *ptr;
    for (int i =0; i<rows ; i++) {
        for ( int j=0; j<cols; j++) {
            if (i==j) {
                ptr = &arr[i][j];
                printf("%d ", *ptr);
            }
        }
    }
    return 0;
}