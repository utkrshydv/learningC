#include <stdio.h>
int main(){
    int temp;
    int a[6]={4,2,2,2,2,3,};
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            if (a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<6; i++){
        int count=1;
        for(int j=i+1; j<6; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if (count>3){
            printf("Majority Element: %d\n", a[i]);
        }
    }

}