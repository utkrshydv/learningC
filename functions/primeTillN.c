#include <stdio.h>
int prime(int x){
    int flag;
       if(x<=1){
        printf("No prime numbers");
       } 
       for(int i=2; i<=x; i++ ){
       flag=1;
       for(int j=2; j<=i/2; j++){
        if(i%j==0){
            flag =0;
            break;
        }
       }

       if(flag==1)
       printf("%d 1", i);
       }
}

int main(){
        int n;
        printf("Enter upper limit: ");
        scanf("%d", &n);
        prime(n);
        return 0;
    }

