#include <stdio.h>
int main(){
    int max=0, max1=0, max2=0;
    int arr[5] ={1,2,4,9,16};

    for(int i=0; i<5; i++){
        if (arr[i]>max){
                max = arr[i];
              for(int i=0; i<5; i++){
                if(arr[i]>max1 && arr[i]<max){
                 max1 = arr[i];
                 for(int i=0; i<5; i++){
                    if(arr[i]>max2 && arr[i]<max1){
                        max2 = arr[i];
                    }
                 }

                }
            }
        }
    }
    printf("2nd largest number: %d\n", max1);
    printf("3rd largest number: %d", max2);
    return 0;
}
