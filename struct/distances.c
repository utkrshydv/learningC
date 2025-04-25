#include <stdio.h>

struct Distance{
    float km;
    float m;
};

int main(){
    float sum;
    struct Distance d1;

    printf("Enter km1: ");
    scanf("%f", &d1.km);
    printf("Enter m1: ");
    scanf("%f", &d1.m);

    struct Distance d2;

    printf("Enter km2: ");
    scanf("%f", &d2.km);
    printf("Enter m2: ");
    scanf("%f", &d2.m);

    sum = (1000*d1.km + d1.m)+(1000*d2.km + d2.m);
    printf("Sum of distances is: %f km", sum/1000);
    return 0;



}