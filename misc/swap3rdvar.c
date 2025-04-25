#include <stdio.h>
int main(){
     int a,b,c;
     printf("Enter two variables: ");
     scanf("%d%d",&a,&b);
     printf("Original Values are: a: %d, b:%d\n", a,b);
     c = a+b;
     b = c-b;
     a = c-a;
     printf("Swapped Values are: a: %d, b: %d\n", a,b);
     return 0;
}