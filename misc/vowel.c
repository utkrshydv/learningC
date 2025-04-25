#include <stdio.h>
int main(){
    char alpha;
    int beta;
    printf("Letter: ");
    scanf("%c",&alpha);
    if ((int)alpha>90){
        beta = (int)alpha-32;
    }
    else {
        beta = (int)alpha;
    }
    if ((char)beta == 'A'||(char)beta == 'E'||(char)beta == 'I'||(char)beta == 'O'||(char)beta == 'U'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}