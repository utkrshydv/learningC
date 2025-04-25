#include <stdio.h>
int main(){
    int n; 
    int a[5]={6,2,3,45,3};
    if(a[0]>a[1]){
        printf("Peak Element: %d\n", a[0]); 
    }
    for(int i=1; i<5; i++ ){
        if( a[i]>a[i-1] && a[i]>a[i+1] )
         printf("Peak Element: %d\n", a[i]);
    }
}