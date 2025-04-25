#include <stdio.h>

void cycle(int *x, int *y, int *z){
    int temp;
    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main(){
    int a,b,c;
    printf("Enter three values: ");
    scanf("%d%d%d", &a,&b,&c);
    cycle(&a,&b,&c);
    printf("Swapped: %d %d %d", a,b,c);
    return 0;
}