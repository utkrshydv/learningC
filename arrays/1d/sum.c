#include <stdio.h>
int main(){
    int n,sum=0,choice,max=0,temp,temp2,prod=1;
    printf("Enter length: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("1. Add\n");
    printf("2. Find Average\n");
    printf("3. Find Largest Element\n");
    printf("4. Arrange in ascending order\n");
    printf("5. Arrange in descending order\n");
    printf("6. Product of all elements.\n");

    printf("Enter a choice: ");
    scanf("%d", &choice);

    switch(choice){

    case 1 : 
       for(int i=0; i<n; i++){
          sum+=arr[i];
        }
        printf("The sum is:%d", sum);
        break;

    case 2 :
        for(int i=0; i<n; i++){
          sum+=arr[i];
        }
        printf("The average is: %d", sum/n);
        break; 
        
    case 3 : 
        for(int i=0; i<n; i++){
            if(arr[i]>max){
                max = arr[i];
            }
            }
            printf("Largest Element is: %d", max);
        break;

    case 4 : //arrange in ascending order
        for(int i=0; i<n; i++){
            for(int j= i+1; j<n; j++){
                if(arr[i]>arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("Elements in ascending order are: ");
        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        break;
        
    case 5:
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++ ){
                if(arr[i]<arr[j]){
                   temp2=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp2;
                }
            }
        }
        printf("Descending order: ");
        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        break;

    case 6:
        for(int i=0; i<n; i++){
            prod*=arr[i];
        }
        printf("Product is: %d", prod);
    break;
        }

return 0;
}