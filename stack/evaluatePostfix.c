#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value){
  if(top==MAX-1){
    printf("StackOverflow");
    return;
  }
  stack[++top] = value;
}

int pop(){
  if(top==-1){
    printf("Stack is empty");
    return -1;
  }
  return stack[top--];
}

int precedence(char c){
  if(c=='^'){
    return 3;
  }else if(c=='*'||c=='/'||c=='%'){
    return 2;
  } else if(c=='+'||c=='-'){
    return 1;
  } else {
    return 0; 
  }
}

int isOperator(char c){
  return (c=='+'||c=='-'||c=='*'||c=='/'||c=='%'||c=='*');
}

void convertToPostfix(char* infix, char* postfix){
  int j=0; 
  char c;

  for(int i=0; infix[i]!='\0'; i++){
    c = infix[i];
    if(isalnum(c)){
      postfix[j++] = c;
    } else if(c=='('){
      push(c);
    } else if(c==')'){
      while(top!=-1 && stack[top]!='('){
        postfix[j++] = pop();
      }
      pop();
    } else if(isOperator(c)){
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

int evaluatePostfix(char* exp){
  for(int i=0; exp[i] != '\0'; i++){
    if(isdigit(exp[i])){
      push(exp[i] - '0');
    }
    else {
      int val2 = pop();
      int val1 = pop();

      switch(exp[i]){
        case '+': push(val1 + val2); break;
        case '-': push(val1 - val2); break;
        case '*': push(val1 * val2); break;
        case '/': push(val1 / val2); break;
        case '^': push(val1 ^ val2); break;
        case '%': push(val1 % val2); break;
      }
    }
  }
  return pop();
}

int main(){
  char infix[MAX], postfix[MAX];
  printf("Enter a infix expression: ");
  scanf("%s", infix);
  convertToPostfix(infix, postfix);
  int result = evaluatePostfix(postfix);
  printf("result of the infix expression is: %d\n", result);
  return 0;
}