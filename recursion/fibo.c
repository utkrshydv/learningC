#include <stdio.h>

int findfibo(int x){
    if(x==1)
      return 0;
    if(x==2)
      return 1;
    return findfibo(x-1)+findfibo(x-2);
}

int main(){
    int n;
    printf("Enter term: ");
    scanf("%d", &n);
    printf("Term is: %d", findfibo(n));
    return 0;
}