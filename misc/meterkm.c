#include <stdio.h>
int main(){
    int metre, km, metre2;
    printf("Enter meters: ");
    scanf("%d",&metre);
    km = metre/1000;
    metre2 = metre-(km*1000);
    printf("%d km and %d metre", km, metre2);
    return 0;
}