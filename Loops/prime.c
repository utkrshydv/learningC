#include <stdio.h>
int main(){
    int n, fact=0;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(n<=1){
        printf("Neither prime nor composite");
        return 0; 
    }

   for(int i=1; i<=n; i++){
         if(n%i==0){
            fact++; 
         }
   }
   if(fact==2){
    printf("%d is a prime number", n);
   }
   else{
    printf("%d is a composite number",n);
   }
   return 0;
}