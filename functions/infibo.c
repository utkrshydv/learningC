#include <stdio.h>
int infibo(int x, int y){
    int a=-1, b=1, c;
    int flag=0;
    for(int i=0; i<y; i++){
        c=a+b;
        if(c==x){
            printf("%d is term %d in Fibo series", x, i+1);
            flag=1;
            break;
        }
        else{
            a=b;
            b=c;
        }
    }
    if(flag==0){
        printf("not found");
    }
}

int main(){
    int n,m;
    printf("Enter Number to search: ");
    scanf("%d", &n);
    printf("Upper Limit: ");
    scanf("%d", &m);
    infibo(n,m);
    return 0;
}