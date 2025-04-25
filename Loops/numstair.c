#include <stdio.h>
int main(){
    int n = 5;
    for (int row = 0; row <=n; row++){
        for (int column = 1; column <= row; column++){
            printf("%d ",column);
        }
        printf("\n");
    }
}