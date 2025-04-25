#include <stdio.h>

int check(int x){
    if(x%2==0)
    printf("%d is even", x);

    else
    printf("Odd");
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    check(n);
    return 0;
}