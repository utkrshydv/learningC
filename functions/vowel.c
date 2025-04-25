#include <stdio.h>
int isVowel(char x){
    if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U'||x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        printf("%c is a vowel", x);
    }
    else{
        printf("%c is a consonant", x);
    }
}

int main(){
    char y;
    printf("Enter character: ");
    scanf("%c", &y);
    isVowel(y);
    return 0;
}