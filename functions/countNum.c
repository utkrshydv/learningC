#include <stdio.h>
int count(int x){
    int count=0;
    if(x==0){
        printf("1");
    }
    else{
    while(x>0){
        x=x/10;
        count++;
    }
    printf("%d", count);
}
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    count(n);
    return 0;
}