#include <stdio.h>
#define MAX 100

int front = -1;
int rear  =-1;
int q[MAX];

void enq(int value){
  if(rear==MAX-1){
    printf("q is full");
    return;
  }
  if(front==-1){
    front=0;
  }
  q[++rear] = value;
  
}

int deq(){
  if(front==-1||front>rear){
    printf("q is empty");
    return -1;
  }
  return q[front++];
}

void display(){
  if(front==-1||front>rear){
    printf("empty");
    return;
  }
  for(int i=front; i<=rear; i++){
    printf("%d ", q[i]);
  }
}

int main(){
  enq(1);
  enq(2);
  enq(3);
  enq(4);
  display();
  deq();
  display();
}