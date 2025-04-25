#include <stdio.h>

float add(int n){
    float sum=0;
    for(int i=1; i<=n; i++){
     sum+=(float)1/i;
    }
    return sum;
}

int main(){
    int x;
    printf("Enter term: ");
    scanf("%d", &x);
    printf("Sum is: %.2f", add(x));
    return 0;
}