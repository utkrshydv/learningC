#include <stdio.h>

void evenSeries(int x){
    int digit =2;
    for(int i=0; i<x; i++){
        printf("%d ", digit);
        digit+=2;
    }
}

void anotherMethod(int y){
    for(int i=1; i<=y; i++){
        printf("%d ", i*2);
    }
}

int main(){
    int n;
    printf("Number of terms: ");
    scanf("%d", &n);
    anotherMethod(n);
    return 0;
}