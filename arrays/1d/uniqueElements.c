#include <stdio.h>
int main(){
    int a[5] = {2,2,3,4,5};
    for(int i =0; i<5; i++){
        int count=0;
        for(int j=0; j<5; j++){
            if(a[i] == a[j]){
                count++;
            }
        }
          if (count==1)
            printf("Unique Element: %d\n", a[i]);
    }
}