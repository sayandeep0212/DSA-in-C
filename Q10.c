#include <stdio.h>

int main() {
    int n, x, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    // Linear Search
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }

    if (count == 0) {
        printf("Element not found\n");
    }
    else if (count == 1) {
        printf("Single search: Element found at position: ");

        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                printf("%d", i + 1);
            }
        }

        printf("\n");
    }
    else {
        printf("Duplicate search: Element found at positions: ");

        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                printf("%d ", i + 1);
            }
        }

        printf("\nTotal occurrences = %d\n", count);
    }

    return 0;
}