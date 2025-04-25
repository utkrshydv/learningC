#include <stdio.h>
int main(){
    int pos,n;
    printf("Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter pos to be deleted: ");
    scanf("%d",&pos);
    for(int i=pos; i<n-1; i++){
        arr[pos] = arr[pos+1];
        pos++;
    }
    printf("New Array: ");
    for(int i=0; i<n-1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}