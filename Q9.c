//WACP to find the biggest and smallest element of each row and column in a matrix

#include<stdio.h>

int main(){
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter the elements: ");
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        int max = arr[i][0];
        int min = arr[i][0];
        for(int j=0;j<2;j++){
            if(arr[i][j] > max) max = arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
        }
        printf("Row %d: biggest = %d, smallest = %d\n", i + 1, max, min);
    }

    for(int j=0;j<2;j++){
        int max = arr[0][j];
        int min = arr[0][j];
        for(int i=0;i<2;i++){
            if(arr[i][j] > max) max = arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
        }
        printf("Column %d: biggest = %d, smallest = %d\n", j + 1, max, min);
    }
}