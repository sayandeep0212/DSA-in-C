// Quick Sort Algorithm Implementation in C

#include <stdio.h>

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[low];
        int l = low;
        int h = high;

        while (l < h)
        {
            while (arr[l] <= pivot && l < high)
            {
                l++;
            }

            while (arr[h] > pivot)
            {
                h--;
            }

            if (l < h)
            {
                int temp = arr[l];
                arr[l] = arr[h];
                arr[h] = temp;
            }
        }

        // Put pivot in its correct position
        int temp = arr[low];
        arr[low] = arr[h];
        arr[h] = temp;

        int pindex = h;

        // Sort left and right parts
        quick_sort(arr, low, pindex - 1);
        quick_sort(arr, pindex + 1, high);
    }
}

int main()
{
    int arr[] = {11, 2, 9, 3, 1, 25, 17, 57, 90, 13};

    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, n - 1);

    printf("Sorted array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}