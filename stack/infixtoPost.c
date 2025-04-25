#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c){
  if(top==MAX-1){
    printf("Stack overflow");
    return;
  }
  stack[++top] = c;
}

char pop(){
  if(top==-1){
    printf("Stack underflow");
    return -1;
  }
  return stack[top--];
}

int precedence(char c){
  if(c=='^'){
    return 3;
  } else if(c=='*'||c=='/'||c=='%'){
    return 2;
  } else if(c=='-'||c=='+'){
    return 1;
  } else {
    return 0;
  }
}

int isOperator(char c){
  return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^'||c=='%');
}

void infixToPostfix(char* infix, char* postfix){
  int i, j=0;
  char c;

  for(i=0; infix[i]!='\0'; i++){
    c = infix[i];

    if(isalnum(c)){
      postfix[j++] = c;
    } else if (c=='('){
      push(c);
    } else if (c==')'){
     while(top!=-1 && stack[top]!='('){
      postfix[j++] = pop();
     }
     pop();
    } else if (isOperator(c)){
      while(top!=-1 && (precedence(stack[top])>precedence(c))){
        postfix[j++] = pop();
      }
      push(c);
    }
  }

  while(top!=-1){
    postfix[j++] = pop();
  }
  postfix[j] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}