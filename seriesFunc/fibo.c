#include <stdio.h>

int fibo(int x){
    int a=-1, b=1, c=0;
    for(int i=0; i<x; i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}

int main(){
    int n;
    printf("Terms: ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}