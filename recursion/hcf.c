#include <stdio.h>

int hcf(int a, int b){
    if(b==0)
     return a;
    return hcf(b, a%b);
}

int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    printf("HCF is: %d", hcf(x,y));
    return 0;
}