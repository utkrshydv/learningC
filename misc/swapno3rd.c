#include <stdio.h>
int main(){
    int a,b;
    printf("Two var: ");
    scanf("%d%d",&a,&b);
    b = a+b;
    a = b-a;
    b = b-a;
    printf("Swapped: %d,%d",a,b);
    return 0;
}