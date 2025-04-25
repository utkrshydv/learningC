#include<stdio.h>

int count(int x){
    int digit = 0;
    if(x<10)
     return 1;
    return 1+count(x/10);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Digits: %d", count(n));
    return 0;
}