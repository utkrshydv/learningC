#include <stdio.h>

#define MAX 10

int stack[MAX];
int topA = -1;
int topB = MAX;

void pushA(int value){
  if(topA+1==topB){
    printf("Stack overflow");
    return;
  }
  stack[++topA] = value;
}

void pushB(int value){
  if(topA+1==topB){
    printf("Stack overflow");
    return;
  }
  stack[--topB] = value;
}

int popA(){
  if(topA==-1){
    printf("stack underflow");
    return -1;
  }
  return stack[topA--];
}

int popB(){
  if(topB==MAX){
    printf("stack underflow");
    return -1;
  }
  return stack[topB++];
}

void displayA(){
  if(topA==-1){
    printf("stack undeflow");
    return;
  }
  for(int i=topA; i>=0; i--){
    printf("%d ", stack[i]);
  }
  printf("\n");
}

void displayB(){
  if(topB==MAX){
    printf("stack undeflow");
    return;
  }
  for(int i=topB; i<MAX; i++){
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main(){
  pushA(1);
  pushA(2);
  pushA(3);
  pushA(4);
  pushA(5);
  pushB(6);
  pushB(7);
  pushB(8);
  pushB(9);
  pushB(10);
  displayA();
  displayB();
 // popA();
 // popA();
 // displayA();
  //popB();
  //popB();
  //displayB();
  pushA(11);
  }