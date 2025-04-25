#include <stdio.h>
int zero(int x){
    int count=0;
    while(x!=0){
        if(x%10==0){
            count++;
            x = x/10;
        }    
        else{
            break;
        }
    }
    printf("Number of zeroes: %d", count);
}

int main(){
    int n; 
    printf("Enter number: ");
    scanf("%d", &n);
    zero(n);
    return 0;
}
