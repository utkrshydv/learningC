#include <stdio.h>

void perfect(int x){
    int sum=0;
    for(int i=1; i<x; i++){
        if(x%i==0)
         sum+=i;
    }
    if(sum==x)
     printf("Perfect Number");
    else
     printf("Not perfect");
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    perfect(n);
    return 0;
}