#include <stdio.h>
int main(){
    int num, a,b,c,d;
    printf("Three Digit: ");
    scanf("%d",&num);
    c = num%10;
    num/=10;
    b = num%10;
    num/=10;
    a = num;
    d = (c*100)+(b*10)+a;
    printf("Reversed Number:%d",d);
    return 0; 
}