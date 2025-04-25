#include <stdio.h>

int reverse(int x){
    int temp;
    int result =0;
    while(x!=0){
        temp = x%10;
        result = result*10 + temp;
        x = x/10; 
    }
    return result;
}

int main(){
    int n;
    printf("Enter number:");
    scanf("%d" , &n);
    int result = reverse(n);
    printf("Reversed number: %d", result);
    return 0;
}