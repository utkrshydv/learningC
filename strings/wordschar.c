#include <stdio.h>

int main(){
    char str[15];
    int c=0, sp=0;

    printf("Enter a sentence: ");
    gets(str);

    for(int i =0; str[i]!='\0'; i++){
        c++;
        if(str[i]==' '){
            sp++;
        }
    }

    printf("Words: %d, characters: %d", sp+1, c);
    return 0;
}