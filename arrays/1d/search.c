#include <stdio.h>
int main(){
    int n,num; 
    printf("Size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to search for: ");
    scanf("%d", &num);

    for(int j=0; j<n; j++){
        if(num == arr[j]){
            printf("%d was found at index %d", num, j);
            break;
        }
    }
 return 0; 
    }
