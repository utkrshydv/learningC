#include <stdio.h>

int sum(int arr[], int n){
    int sum=0;
    int *p;
    for(int i=0; i<n; i++){
        p = &arr[i];
        sum+=*p;
    }
    return sum;
}

int main(){
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Sum is: %d", sum(arr,n));
    return 0;

}

