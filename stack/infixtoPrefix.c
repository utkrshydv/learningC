#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;
char infix[MAX], postfix[MAX], temp[MAX];

void push(int value){
  if(top==MAX-1){
    printf("stack overflow");
    return;
  }
  stack[++top] = value;
}

int pop(){
  if(top==-1){
    printf("stack is empty");
    return -1;
  }
  return stack[top--];
}

void reverse(char* string, int length){
  int j=length-1;
  int i = 0;
  while(j>=0){
    if(string[j]=='('){
      temp[i] = ')';
    }else if(string[j] == ')'){
      temp[i] = '(';
    } else {
      temp[i] = string[j];
    }
    i++;
    j--;
  }
  temp[i] = '\0';
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

void convertToPostfix(){
  int j=0;
  char c;

  for(int i=0; temp[i]!='\0'; i++){
    c = temp[i];
    if(isalnum(c)){
      postfix[j++] = c;
    } else if(c=='('){
      push(c);
    } else if(c==')'){
      while(top!=-1&& stack[top]!='('){
        postfix[j++] = pop();
      }
      pop();
    }else if(isOperator(c)){
      while(top!=-1 && (precedence(stack[top])>precedence(c))){
        postfix[j++] = pop();
      }
      push(c);
    }
  }
  while(top!=-1){
      postfix[j++] = pop();
  }
  postfix[j++] = '\0';
}

int evaluatePrefix(){
  int length = strlen(temp)-1;
  for(int i=length; i>=0; i--){
    if(isdigit(temp[i])){
      push(temp[i]-'0');
    } else{
      int val1 = pop();
      int val2 = pop();
      switch (temp[i]){
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
  printf("enter infix expression: ");
  scanf("%s", infix);
  reverse(infix, strlen(infix));
  convertToPostfix();
  reverse(postfix, strlen(postfix));
  printf("prefix expression: %s\n", temp);
  int result = evaluatePrefix();
  printf("evaluated: %d", result);
}


