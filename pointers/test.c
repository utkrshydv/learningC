#include <stdio.h>
int main(){
    int i=10;
    int *p = &i;
    printf("%d\n", p);
    printf("%p", p);
    return 0; 
}