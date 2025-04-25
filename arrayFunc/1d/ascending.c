#include <stdio.h>
int ascend(int arr[], int x){
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
    for(int i=0; i<x; i++){
        printf("%d", arr[i]);
    }
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
    ascend(arr, n);
    return 0;
}