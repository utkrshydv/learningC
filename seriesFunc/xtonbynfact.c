#include <stdio.h>
#include <math.h>

float operate(int x, int n){
    float result;
    int deno=1;
    int numerator = pow(x,n);
    for(int i=1; i<=n; i++){
           deno*=i;
    }
    result = (float)numerator/deno;
    return result;
}

int main(){
    int a,b;
    printf("Enter X and n: ");
    scanf("%d %d", &a,&b);
    printf("Result is: %.2f", operate(a,b));
    return 0;
}