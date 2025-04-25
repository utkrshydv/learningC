#include <stdio.h>
#include <string.h>
#define MAX 10

int stack[MAX];
int top = -1;

void Push(int value){
  if(top==MAX-1){
    printf("Stack overflow");
    return;
  }
  stack[++top] = value;
}

char Pop(){
  if(top==-1){
    printf("Stack undeflow");
    return -1;
  }
  return stack[top--];
}

void checkBalanced(char* exp){
  int flag = 1;
  char temp;
   for(int i=0; i<strlen(exp); i++){
    if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
      Push(exp[i]);
    }
    if(exp[i]==')'|| exp[i]=='}'||exp[i]==']'){
      if(top==-1){
        flag=0;
      } else {

        temp =  Pop();
        if(exp[i]==')' && (temp=='{'||temp=='[')){
          flag=0;
        }
        if(exp[i]=='}' && (temp=='('||temp=='[')){
          flag=0;
        }
        if(exp[i]==']' && (temp=='{'||temp=='(')){
          flag=0;
        }
      }
    }
   }
  if(top>=0){
    flag=0;
  }
  if(flag==1){
    printf("\n Valid Expression");
  } else {
    printf("\n Invalid Expression");
  }
}

int main(){
  char exp[MAX];
  printf("Enter a string");
  fgets(exp, MAX, stdin);
  checkBalanced(exp);
}