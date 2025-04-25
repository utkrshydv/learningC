#include <stdio.h>
int main(){
    int a[5] = {2,2,3,4,5};
    for(int i =0; i<5; i++){
            if(a[i]%2==0){
                 printf("Even Number: %d\n", a[i]);
            }
            else{
                printf("Odd Number: %d\n", a[i]);
            }               
    }
    return 0;       
} 