#include <Stdio.h>

int gcd(int x, int y){
    int gcd=0,z;

    if(x<y)
       z = x;
    else
       z = y; 

    for(int i=1; i<=z; i++){
        if(x%i == 0 && y%i == 0){
            if(gcd<i){
            gcd = i;
            }
        }
    }
    return gcd;
} 

int lcm(int x, int y){
    int lcm;
    for(int i=1; i<x*y; i++){
        if(i%x==0 && i%y==0){
           lcm = i;
           break;
        }
    }
    return lcm;
}

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int d = gcd(a,b);
    int e = lcm(a,b);
    printf("GCD is: %d \n", d);
     printf("LCM is: %d \n", e);
    return 0; 
}

