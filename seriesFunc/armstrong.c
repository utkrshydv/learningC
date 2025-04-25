#include <stdio.h>
#include <math.h>

void isArm(int x){
    int ogX = x;
    int temp = x, result = 0;
    int temp2;
    int count = 0;

    while(x != 0){
        x = x / 10;
        count++;
    }

    for(int i = 0; i < count; i++){
        temp2 = temp % 10;
        result = result + pow(temp2, count);
        temp = temp / 10;
    }

    if(result == ogX){
        printf("Armstrong Number\n");
    } else{
        printf("Not Armstrong\n");
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isArm(n);
    return 0;
}