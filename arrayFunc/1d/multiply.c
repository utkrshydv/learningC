#include <stdio.h>
int factor(int arr[], int x){
    int fact=1;
    for(int i=0; i<x; i++){
        fact*=arr[i];
    }
    printf("%d", fact);
}

int main(){
    int n;
    printf("enter size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    factor(arr,n);
    return 0;
}