#include <stdio.h>
int largest(int arr[], int x){
    int temp;
    for(int i=0; i<x; i++){
        for(int j=i+1; j<x; j++){
            if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
        printf("largest element is : %d\n", arr[0]);
        printf("smallest element is : %d\n", arr[x-1]);
}

int smallest(int arr[], int x){
    int temp;
    for(int i=0; i<x; i++){
        for(int j=i+1; j<x; j++){
            if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
        printf("smallest element is : %d", arr[0]);
}

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    largest(arr, n);
    smallest(arr, n);
    return 0;
}