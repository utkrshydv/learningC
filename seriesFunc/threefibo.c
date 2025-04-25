#include <stdio.h>

int three(int x){
    int a=0, b=1, c=1, d;
    if(x==1)
    printf("%d", a);
    else if(x==2)
    printf("%d %d", a,b);
    else if(x==3)
    printf("%d %d %d", a,b,c);
    else{
        printf("%d %d %d", a, b, c);
    for(int i=0; i<x; i++){
    d = a+b+c;
    printf("%d ", d);
    a=b;
    b=c;
    c=d;
    }
}
}

int main(){
    int n;
    printf("Terms : ");
    scanf("%d", &n);
    three(n);
    return 0;
}