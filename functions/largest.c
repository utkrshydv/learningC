#include <stdio.h>

int largest(int x, int y, int z){
    if(x>y && x>z){
        printf("%d is the largest", x);
    }
    else if(y>x && y>z){
        printf("%d is the largest", y);
    }
    else{
        printf("%d is the largest", z);
    }
}

int main(){
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d%d%d", &a,&b,&c);
    largest(a,b,c);
    return 0;
}



