#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x,
    *x = *y;
    *y = temp;
}

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("After swaping: ");
    swap(&a,&b);
    printf("%d %d", a,b);
    return 0;
}