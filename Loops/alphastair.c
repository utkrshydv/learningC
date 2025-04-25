#include <stdio.h>
int main(){
    int n=5;
    for(int row=0; row<n;row++){
        char alpha = 'A'+row;
        for(int column=0; column<=row;column++){
            printf("%c",alpha);
        }
        printf("\n");
    }
}
