#include <stdio.h>

int main(){
    int r,c;
    printf("Row and column: ");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter elements: ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal Elements are: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i==j){
                printf("%d ", arr[i][j]);
            }
            else{
                printf(" ");
            }
           
        }
         printf("\n");
    }
    return 0;
}