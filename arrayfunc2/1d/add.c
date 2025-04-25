#include <stdio.h>

int add(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
    printf("Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Sum is: %d", add(arr,n));
    return 0;
}