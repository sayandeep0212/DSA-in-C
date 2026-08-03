#include <stdio.h>

int main() {
    int a, b, c, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find Maximum
    max = (a > b) ? ((a > c) ? a : c)
                  : ((b > c) ? b : c);

    // Find Minimum
    min = (a < b) ? ((a < c) ? a : c)
                  : ((b < c) ? b : c);

    printf("Maximum Number = %d\n", max);
    printf("Minimum Number = %d\n", min);

    return 0;
}