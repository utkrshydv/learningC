#include <stdio.h>
int isPali(int x){
    int temp2, result=0;
    int temp=x;
    int ogX = x;
    int count=0;
    int reversed;
    while(x!=0){
        x=x/10;
        count++;
    }
    for(int i=0; i<count; i++){
        temp2 = temp%10;
        result = result*10 + temp2;
        printf("result: %d\n", result);
        temp = temp/10;
    }
    if (result == ogX)
      printf("Palindrome");
    else 
      printf("Not Palindrome");
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isPali(n);
    return 0;
}
