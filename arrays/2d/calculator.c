#include <stdio.h>
int main(){
char choice;
int m,n, p, q, sum, difference, product;


    printf("Number of rows for M1: ");
    scanf("%d", &m);
    printf("Number of columns for M1: ");
    scanf("%d", &n);
    int a[m][n];
    int s[m][n];
    printf("Enter Elements: \n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

     printf("Number of rows for M2: ");
    scanf("%d", &p);
    printf("Number of columns for M2: ");
    scanf("%d", &q);
    int b[p][q];
    printf("Enter Elements: \n");
    for (int i=0; i<p; i++){
        for (int j=0; j<q; j++){
            scanf("%d", &b[p][q]);
        }
    }

    printf("Enter choice (+,-,x): ");
    scanf(" %c", &choice);

    switch(choice){
        case '+':
                for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                       s[i][j] = a[i][j] + b[i][j];
                }
             }
             for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    printf("%d", &s[i][j]);
                }
             }
             break;
    }
}

 