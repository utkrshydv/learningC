//check if two strings are anagram or not

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isAnagram(char *w1, char *w2){
  int len1 = strlen(w1);
  int len2 = strlen(w2);

  if(len1 == len2){
    int countW1[26] = {0};
    int countW2[26] = {0};

    for(int i=0; i<len1; i++){
      int lowerW1 = tolower(w1[i]);
      countW1[ lowerW1 - 'a']++;
      int lowerW2 = tolower(w2[i]);
      countW2[ lowerW2 - 'a']++;
    }

    for(int i=0; i<26; i++){
      if(countW1[i] != countW2[i]){
        return false;
      }
    }
     return true;
  } else {
    return false;
  } 
}

int main(){

  char w1[50], w2[50];

  printf("Enter string 1: ");
  if(fgets(w1, sizeof(w1), stdin) != NULL){
    w1[strcspn(w1, "\n")] = '\0';
  }
  

  printf("Enter string 2: ");
  if(fgets(w1, sizeof(w1), stdin) != NULL){
    w2[strcspn(w2, "\n")] = '\0';
  }

  if(isAnagram(w1, w2)){
    printf("%s and %s are anagrams", w1, w2);
  } else{
    printf("Not Anagrams!");
  }
  return 0;
}
