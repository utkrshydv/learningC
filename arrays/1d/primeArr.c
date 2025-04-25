/*#include <stdio.h>
int main(){
    int n,a,fact,i,j;
    printf("Enter size: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        a = arr[i];
        fact=0;
        for(j=2; j<n; j++){
        if(a%j==0){
            fact=1;
            break;
        }
        }
        if(fact ==0){
            printf("%d is a prime number", a);
        }
    } 
    return 0;
}   */