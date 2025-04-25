#include <stdio.h>

int lcm(int x, int y){
    static int low =1;
    if(low%x ==0 && low%y==0){
        return low;
    }
    else{
        low++;
        lcm(x,y);
        return low;
    }
}

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Lcm is: %d", lcm(a,b));
    return 0;
}