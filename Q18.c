//insertion sort implementation in C
#include<stdio.h>

void insertion(int* arr,int n){
    for(int i=1;i<n;i++){
        int curr=i, prev=i-1;
        int temp = arr[i];
        while(prev>=0 && arr[prev]>temp){
            arr[curr--] = arr[prev--];
        }
        arr[curr] = temp;
    }
}

int main(){
    int arr[] = {4,3,2,10,12,1,5,6};
    insertion(arr,sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("%d ", arr[i]);
    }
}