#include <stdio.h>
float convert(int x){
     int km = x/1000;
     int meter = x%1000;
     printf("%d km and %d m", km, meter);    
}

int main(){
    int m;
    printf("Enter meters: ");
    scanf("%d", &m);
    convert(m);
    return 0;
}