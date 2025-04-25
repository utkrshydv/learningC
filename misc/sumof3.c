#include <stdio.h>
int main(){
    int number, a,b,c,d,sum;
    printf("Three digit number: ");
    scanf("%d", &number);
    if (number/100 >= 10) {
        printf("Greater than 3 digit");
    }
    else{
    a = number/100;
    b = number%100;
    c = b/10;
    d = number%10;
    sum = a + c + d;
    printf("Sum: %d",sum);
    }
    return 0;
}