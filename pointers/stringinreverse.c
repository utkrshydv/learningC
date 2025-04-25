#include <stdio.h>

void reverse(char str[]){
    char *start = str;
    char *end = str;
    char temp;
    while(*end != '\0'){
        end++;
    }
    end--;

    while(start<end){
       temp = *start;
       *start = *end;
       *end = temp;
       start++;
       end--;
    }
}

int main(){
    char str[50];
    printf("Enter your name: ");
    scanf("%s", str);
    reverse(str);
    printf("Reversed: %s", str);
    reverse;
}