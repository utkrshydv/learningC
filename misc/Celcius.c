#include <stdio.h>
int main(){
    float c,f;
    printf("Enter Temp in Cel: ");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf("Temp in Fahrenheit:%.2f",f);
    return 0;
}