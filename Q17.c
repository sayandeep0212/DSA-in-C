//merge sort implementation in C
#include <stdio.h>

void merge(int *arr, int low, int mid, int high) {
    int temp[1000];
    int i = low;
    int j = mid + 1;
    int index = 0;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[index++] = arr[i++];
        } else {
            temp[index++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[index++] = arr[i++];
    }

    while (j <= high) {
        temp[index++] = arr[j++];
    }

    for (int k = 0; k < index; k++) {
        arr[low + k] = temp[k];
    }
}

void merge_sort(int *arr, int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = low + (high - low) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main(void) {
    int arr[] = {80, 60, 10, 70, 20, 40, 30, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}