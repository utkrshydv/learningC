#include <stdio.h>
int swap(int x, int y){
    int temp;
    temp = x;
    x=y;
    y=temp; 
    printf("Swapped Variables: %d, %d",x,y);
}

int main(){
    int a,b;
    printf("Enter variables to be swapped: ");
    scanf("%d%d", &a,&b);
    printf("Original Variables: %d, %d\n",a,b);
    swap(a,b);
    return 0;
}