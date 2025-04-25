#include <stdio.h>
int main(){
    int n = 5;
    for (int row =0; row<=2*n-1; row++){
        int stars = row;
        if (row>n) stars = 2*n - row;
        for (int column =0; column<stars;column++){
            printf("*");
        }
        printf("\n");
    }
}