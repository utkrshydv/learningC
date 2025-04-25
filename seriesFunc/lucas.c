#include <stdio.h>

int lucas(int x){
    int a=1, b=3, c=0;
    if(x==1)
     printf("%d",a);
    else if(x==2)
     printf("%d %d", a, b);
    
    else
    printf("%d %d", a, b);
     for(int i=2; i<x; i++){
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
     }
}

int main(){
    int n;
    printf("Terms: ");
    scanf("%d", &n);
    lucas(n);
    return 0;
}