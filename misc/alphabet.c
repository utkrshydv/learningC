#include <stdio.h>
int main(){
    char alpha;
    int beta;
    printf("Enter a character : ");
    scanf("%c",&alpha);
    if ((int)alpha > 90){
        beta = alpha - 32;
        printf("%c",beta);
    }
    else {
        printf("%c", alpha);
    }
}