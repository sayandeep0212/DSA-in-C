//WACP TO FIND THE SADDLE POINT OF A MATRIX USING POINTER.
#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 5, 3},
        {8, 10, 4},
        {20, 11, 15}
    };

    int *p;
    int i, j, min, saddle = 0;

    p = &a[0][0];

    for (i = 0; i < 3; i++) {
        min = *(p + i * 3);

        for (j = 0; j < 3; j++) {
            if (*(p + i * 3 + j) < min) {
                min = *(p + i * 3 + j);
            }
        }
        for (j = 0; j < 3; j++) {

            if (*(p + i * 3 + j) == min) {

                int k, isSaddle = 1;

                for (k = 0; k < 3; k++) {
                    if (*(p + k * 3 + j) > min) {
                        isSaddle = 0;
                        break;
                    }
                }

                if (isSaddle) {
                    printf("Saddle Point is: %d\n", min);
                    saddle = 1;
                }
            }
        }
    }

    if (!saddle) {
        printf("No Saddle Point\n");
    }

    return 0;
}
