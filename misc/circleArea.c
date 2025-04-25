#include <stdio.h>
int main(){
    float r,a;
    const float PI = 3.14;
    printf("Enter radius: ");
    scanf("%f",&r);
    a = PI*r*r;
    printf("Area:%.2f",a);
    return 0;
}