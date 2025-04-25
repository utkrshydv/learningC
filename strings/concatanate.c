#include <stdio.h>
#include <string.h>

void concat(char *str1, char *str2){
    char *start = str2;
    char *end =  str1;

    while(*end != '\0'){
        end++;
    }
    end--;
    while(*start!='\0'){
            *end = *start;
            end++;
            start++;
    }
    *end = '\0';
}

int main(){
   char str1[50];
   char str2[50];
   printf("Enter string 1: ");
   scanf("%s", str1);
   printf("Enter string 2: ");
   scanf("%s", str2);
   concat(str1, str2);
   printf("String: %s", str1);
   return 0;
}