#include <stdio.h>
int main(){
    int n;
    printf("Length of Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int rev[n];
    for(int i=0; i<n; i++){
        rev[i] = arr[n-i-1];
    }

     for(int i=0; i<n; i++){
        printf("%d ", rev[i]);
    }

}