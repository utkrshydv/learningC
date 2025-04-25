#include <stdio.h>
int sum(int arr[], int x){
    int sum1=0;
    for(int i=0; i<x; i++){
        sum1 = sum1 +arr[i];
    }
    return sum1;
}

int main(){
    int n,c;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    c= sum(arr, n); 
    printf("%d", c);
    return 0;
}

