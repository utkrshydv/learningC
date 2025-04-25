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
    printf("Your Input Was: \n");
    printf("{");
    for(int i=0; i<n; i++){
        if(i<n-1){
        printf("%d ",arr[i]);
        } else{
            printf("%d", arr[i]);
        }
    }
    printf("}");
    return 0;
}