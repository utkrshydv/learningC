#include <stdio.h>

int duplicate(int arr[], int x){
    int s;
    for(int i=0; i<x-1; i++){
        int count = 0;
        for(int j=i+1; j<x; j++){
            if (arr[i] == arr[j]){
                count++ ;
            }
            if(count>1){
                s=0;

            }
        }
    }
    printf("Duplicate elements: %d", count);
}