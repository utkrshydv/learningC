#include <stdio.h>
int oddOrEven(int x){
    if(x==0){
        printf("Neither even nor odd");
    }
    else{
    if(x%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    oddOrEven(n);
    return 0;
}