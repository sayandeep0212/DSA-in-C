// WACP to CHECK whether THE GIVEN ELEMENT IS PRESENT IN A LIST USING BINARY SEARCH MECHANISM

#include <stdio.h>

int main() {
    int n, arr[100], key, low, high, mid, found = 0, pos = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1;
            pos = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found == 1) {
        printf("Element %d is present in the list at position %d.\n", key, pos + 1);
    } else {
        printf("Element %d is not present in the list.\n", key);
    }

    return 0;
}