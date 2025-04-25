#include <stdio.h>
int main(){
    int n = 3;
    for (int row=0; row<n;row++){
        for (int column=0; column<n-row; column++){
            printf("*");
        }
         printf("\n");
    }

}