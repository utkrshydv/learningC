#include <stdio.h>

int terms(int x){
    for(int i=1; i<=x; i++){
        printf("%d ", i);
    }
}

int main(){
    int n;
    printf("Enter terms: ");
    scanf("%d", &n);
    terms(n);
    return 0;
}