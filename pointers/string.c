#include <stdio.h>

void concatenateStrings(char *a, char *b){
  while(*a != '\0'){
    a++;
  }
  while(*b != '\0'){
    *a = *b;
    a++;
    b++;
  }
  *a = '\0';
}

void displayString(char *a){
  while(*a != '\0'){
    printf("%c", *a);
    a++;
  }
}

void copyString(char *p, char *q){
  while (*p != '\0') {
    *q = *p;
    p++;
    q++;
  }
  *q = '\0';
}

void compareStrings(char *p, char *q){
  while(*p != '\0'){
    if(*p != *q){
      printf("Strings are not identical");
      break;
    }
    p++; 
    q++;
  }
}

void reverseString(char *p, char *q){
  char *initial = q;
  int i = 0;

  printf("%p \n", p);

  while(*(p+i) != '\0'){
    i++;
  }
  printf("%p %d \n", p, i);


  while(i>0){
    *q = *(p+i-1);
    q++;
    i--;
  }
  *(q) = '\0';

  displayString(initial);
}

int main() {
  char name[15] = "utkarsh";
  char dupli[10];
  char *p, *q;
  p = name;
  q = dupli;
  // copyString(p, q);
  // displayString(q);
  // concatenateStrings(p, q);
  // displayString(p);
  //  compareStrings(p, q);
  reverseString(p, q);
  return 0;  
}
