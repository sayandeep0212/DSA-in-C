// WACP to transpose a matrix

#include <stdio.h>

int main() {
    int arr[2][2], trans[2][2];

    printf("Enter the elements row-wise:\n");

    for (int i = 0; i < 2; i++) {
        printf("Enter row %d elements:\n", i + 1);

        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            trans[j][i] = arr[i][j];
        }
    }

    printf("The transpose of the 2D array is:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}