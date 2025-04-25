#include <stdio.h>
int isPrime(int x){
    if (x<=1){
        printf("Neither Prime nor composite");
    }
    else{
        int flag=0;
        for (int i=2; i<=x/2; i++){
        if(x%i==0){
            flag=1;
        }
        }
        if(flag==1){
        printf("Composite");
        }
        else{
            printf("Prime");
        }
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isPrime(n);
    return 0;
}