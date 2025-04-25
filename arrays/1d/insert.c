#include <stdio.h>
int main(){
    int n, new, pos; 
    printf("Enter the number of elements: ");
    scanf("%d", &n); 
    
    int arr[n+1];
    printf("Enter elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to be inserted: "); 
    scanf("%d", &new);

    printf("Enter position: ");
    scanf("%d", &pos);

    for(int i=n; i>=pos; i--){
        arr[i+1] = arr[i];
    }
      arr[pos] = new;
      
    for(int i=0; i<n+1; i++){
        printf("%d", arr[i]);
    }
    return 0;
}