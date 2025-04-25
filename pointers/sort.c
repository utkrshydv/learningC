#include <stdio.h>

void sort(int arr[], int n){
    int temp;
    for(int i=1; i<n; i++){
          if (*arr>*(arr+i)){
            temp = *(arr+i);
            *(arr+i) = *arr;
            *arr = temp;
          }
    }
}

int main(){
    int x;
    printf("Size: ");
    scanf("%d, &x");
    int arr[x];
    printf("Enter elements: ");
    for(int i=0; i<x; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr,x);
    printf("sorted: ");
    for(int i=0; i<x; i++){
        printf("%d ", arr[i]);
    }
}