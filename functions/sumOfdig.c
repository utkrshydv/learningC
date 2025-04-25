#include <stdio.h>
int sum(int x){
    int y;
    int result =0;
    while(x>0){
        y = x%10;
        result+=y;
        x=x/10;
    }
    printf("Sum is: %d", result);
}

int main(){
    int n;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    sum(n);
    return 0;
}