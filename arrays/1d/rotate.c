#include <Stdio.h>
int main(){
    int b,pos=10; 
    int arr[5] = {1,2,3,4,5};
    for (int j=0; j<pos; j++){
    b = arr[0];
    for(int i=1; i<5; i++){
          arr[i-1] = arr[i]; 
    }
    arr[4] = b;
    }
     for(int i=0; i<5; i++){
        printf("%d", arr[i]);
    }
}