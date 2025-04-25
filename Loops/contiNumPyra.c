#include <stdio.h>
int main(){
    int n=5;
    int num=1;
    for(int row=1; row<=n; row++){
       for(int column=1;column<=row;column++){
        printf("%d",num);
        num++;
       }
       printf("\n");
    }
}