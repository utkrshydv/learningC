#include <stdio.h>
int main(){
    int n= 4;
    for(int row = 1; row<=n; row++){
        for (int number = 1; number<=row; number++){
            printf("%d",number);
        }
        for(int space=1; space<=2*n-2*row;space++){
            printf("*");
        }
        for(int number = row; number>0; number--){
            printf("%d",number);
        }
        printf("\n");
    }
}