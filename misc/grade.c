#include <stdio.h>
int main() {
    int a, b,c;
    printf("Enter your marks ");
    scanf("%d",&a);
    b = a/10;
    switch(b){
        case 10:
        case 9: 
        printf("O");
        break;
        case 8:
        printf("E");
        break;
        case 7:
        printf("A");
        break;
    }
}