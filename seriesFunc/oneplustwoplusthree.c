#include <stdio.h>

int sum(int x){
    int sum =0;
    for(int i=1; i<=x; i++ ){
        for(int j=1; j<=i; j++){
            sum+=j;
        }
    }
    return sum;
}

int main(){
    int n;
    printf("Number of terms: ");
    scanf("%d", &n);
    int add = sum(n);
    printf("The sum is: %d", add);
    return 0;
}