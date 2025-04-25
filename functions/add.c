#include <stdio.h>
int add(int x, int y){
    return x+y ;
}

int main(){
    int a,b;
    printf("Enter integers to add: ");
    scanf("%d%d", &a, &b);
    printf("The sum is: %d", add(a,b));
    return 0;
}