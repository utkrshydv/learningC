#include <stdio.h>

int add(int x){
    if(x==0)
    return 0;
    else
    return (x%10 + add(x/10));
}

int multiply(int y){
    if(y==0)
     return 0;
    else if(y<10)
     return y;
    else
    return ((y%10)*multiply(y/10));
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("sum is: %d", add(a));
    printf("product is: %d", multiply(a));
    return 0;
}