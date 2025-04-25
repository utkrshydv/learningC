#include <stdio.h>
int main(){
    int m,n;
    printf("Rows for M1 and M2: ");
    scanf("%d", &m);
    printf("Columns for M1 and M2: ");
    scanf("%d", &n);

    printf("Elements for M1: \n");
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Elements for M2: \n");
    int b[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}