#include <stdio.h>

int isLeap(int x){
    if((x%100!=0 && x%4==0)||(x%400==0)){
            printf("%d is a leap year", x);
        }
        else{
            printf("Not a leap year");
        }
    }
    
int main(){
    int n;
    printf("Enter year");
    scanf("%d", &n);
    isLeap(n);
    return 0;
}