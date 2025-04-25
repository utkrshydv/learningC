#include <stdio.h>

int *findmid(int a[], int n){
    return &a[n/2];
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int *mid = findmid(arr,5);
    printf("%d", *mid);
}

