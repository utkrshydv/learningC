#include <stdio.h>

int main() {
   int arr[] = {1,2,3,4,5,6,7};
   int k=3;
   
   int i=0; 
   int j=0;
   int sum=0;
   int max=0;
   
   while(j<7){
       sum+=arr[j];
       if(j-i+1==k){
           if(sum>max){
               max=sum;
           }
           sum-=arr[i];
           i++;
       }
       j++;
   }
   
   printf("%d", max);

    return 0;
}