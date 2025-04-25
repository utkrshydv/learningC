#include <stdio.h>

int factors(int x){
    printf("Factors are: ");
    for(int i=1; i<=x; i++){
       if(x%i==0){
        printf("%d ", i);
       }
}
}

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    factors(n);
    return 0;
}