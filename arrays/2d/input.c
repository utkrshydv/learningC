#include <stdio.h>
int main(){
    int m,n;
    printf("Enter rows: \n");
    scanf("%d",&m);
    printf("Enter columns: \n");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter Elements: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Your entered array way: \n");
    printf("{");
    for(int i=0; i<m; i++){
        if(i==0){
            printf("{");
        }
        else{
         printf(" {");
        }
        for(int j=0; j<n; j++){
            if(j==0){
                printf(" ");
            }
            printf("%d ", a[i][j]);
        }
        if(i==n-1){
            printf("}");
        }
        else{
            printf("},\n");
        }
    }
    printf("}");
}