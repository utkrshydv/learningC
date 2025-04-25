#include <stdio.h>
int palindrome(int x){
    int remainder, result =0;
    int y = x;
    while(x!=0){
         remainder = x%10;
         result = result*10 + remainder; 
         x=x/10;
    }
    if(result==y){
        printf("%d is palindrome", y);
    }
    else{
        printf("Not palindrome");
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    palindrome(n);
}   