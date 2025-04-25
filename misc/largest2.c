#include <stdio.h>
int main(){

    int a,b;
    printf ("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    if (a>b){
        printf("%d is bigger",a);
    }
    else if (b>a){
        printf("%d is bigger", b);
    }
    else {
        printf("Both are equal");
    }
}