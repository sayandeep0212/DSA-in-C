#include <stdio.h>

int main() {
    int a[2][2] = {
        {3, 4},
        {8, 9}
    };

    int *p;
    int max1, max2, min1, min2;

    p = &a[0][0];

    max1 = min1 = *p;
    max2 = min2 = *p;

    for (int i = 0; i < 4; i++, p++) {

        if (*p > max1) {
            max2 = max1;
            max1 = *p;
        }
        else if (*p > max2 && *p < max1) {
            max2 = *p;
        }

        if (*p < min1) {
            min2 = min1;
            min1 = *p;
        }
        else if (*p < min2 && *p > min1) {
            min2 = *p;
        }
    }

    printf("Second maximum element is: %d\n", max2);
    printf("Second minimum element is: %d\n", min2);

    return 0;
}