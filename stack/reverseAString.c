#include <stdio.h>
#include <string.h>

void reverse(char *c, int n){
  int i=0;
  int j=n-1;
  char temp;
  while(i<j){
    temp = c[j];
    c[j] = c[i];
    c[i] = temp;
    i++;
    j--;
  }
}

int main(){
  char c[50];
  printf("Enter a string: ");
  fgets(c, sizeof(c), stdin);
  reverse(c, strlen(c));
  printf("%s", c);
}