#include <stdio.h>
int main(){
    int p,q,m,n;
    printf("Rows for M1: ");
    scanf("%d", &m);
    printf("Columns for M1: ");
    scanf("%d", &n);

    printf("Rows for M2: ");
    scanf("%d", &p);
    printf("Columns for M2: ");
    scanf("%d", &q);

    if(n!=p){
    printf("Matrices cannot be multiplied. Columns of M1 not equal to Rows of M1");
    return 0;
    }

    int a[m][n];
    int b[p][q];

    printf("Enter elements for M1:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for M2:\n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("Product: \n");
    for(int i=0; i<m; i++){
        printf("[");
        for(int j=0; j<q; j++){
            printf(" %d ", a[i][j]*b[i][j]);
    }
    printf("]");
    printf("\n"); 
}
return 0;
}


/*

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
*/