#include <stdio.h>
#include <string.h>

void count(char str[]){
    int length = strlen(str);
    int vowel = 0;
    int consonants = 0;
    char *start = str;
    for(int i=0; i<length; i++){
        if(*start=='a'||*start=='e'||*start=='i'||*start=='o'||*start=='u'||*start=='A'||*start=='E'||*start=='I'||*start=='O'||*start=='U'){
            vowel+=1;
        }
        else{
        consonants+=1;
        }
        start++;
    }
    printf("Vowels: %d Consonants: %d", vowel, consonants);
}

int main(){
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    count(str);
    return 0;
}
  