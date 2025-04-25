#include <stdio.h>
#include <stdlib.h>



void printPolynomial(int** poly, int terms){
     printf("f(x) = ");
     for(int i=0; i<terms; i++){
        if(i>0 && poly[0][i]>0){
            printf(" + ");
        }

        if(poly[0][i]>0){
            if(poly[1][i]==0){
            printf("%d", poly[0][i]);
            } else {
            printf("%dx^%d", poly[0][i], poly[1][i]);
            }
        }      
    }
}

int** addPolynomial(int** poly1, int** poly2, int terms1, int terms2){
    int size = terms1 + terms2;
    int** sumPoly = malloc(sizeof(int*)*2);
    for(int i=0; i<2; i++){
        sumPoly[i] = malloc(sizeof(int)*size);
    }
    
    int i=0, j=0, k=0;

    while(i<terms1 && j<terms2){
        if(poly1[1][i] == poly2[1][j]){
          sumPoly[0][k] = poly1[0][i]+poly2[0][j];
          sumPoly[1][k] = poly1[1][i];
          i++;
          j++;
          k++;
        } else if(poly1[1][i]>poly2[1][j]){
          sumPoly[0][k] = poly1[0][i];
          sumPoly[1][k] = poly1[1][i];
          i++;
          k++;
        } else {
          sumPoly[0][k] = poly2[0][j];
          sumPoly[1][k] = poly1[1][j];
          j++;
          k++;
        }
    }
    

    while(i<terms1){
        sumPoly[0][k] = poly1[0][i];
        sumPoly[1][k] = poly1[1][i];
        i++;
        k++;
    }

    while(i<terms2){
        sumPoly[0][k] = poly2[0][j];
        sumPoly[1][k] = poly2[1][j];
        j++;
        k++;
    }

    sumPoly[0] = realloc(sumPoly[0], sizeof(int)*k);
    sumPoly[1] = realloc(sumPoly[1], sizeof(int)*k);

    printPolynomial(sumPoly, k);
}

int** acceptPolynomial(int terms){
    
    int** poly = malloc(sizeof(int*)*2);
    for(int i=0; i<2; i++){
      poly[i] = malloc(sizeof(int)*terms);
    }

    for(int i=0; i<terms; i++){
        printf("enter coefficient: ");
        scanf("%d", &poly[0][i]);
        printf("enter exponents: ");
        scanf("%d", &poly[1][i]);
    }
    return poly;
}

int main(){
    int n, m, total;
    printf("Number of polynomials you want to add: ");
    scanf("%d", &total);

    int*** storePoly = malloc(sizeof(int**)*total);
    int* term = malloc(sizeof(int)*total);
    
    for(int i=0; i<total; i++){
        printf("For Polynomial %d:\n", i+1);
        printf("No. of terms: ");
        scanf("%d", &term[i]);
        storePoly[i] = acceptPolynomial(term[i]);
    }

    printf("The polynomials you entered are: \n");
    for(int i=0; i<total; i++){
       printPolynomial(storePoly[i], term[i]);
       printf("\n");
    }

    int** sumPoly = addPolynomial(storePoly[0], storePoly[1], term[0], term[1]);

}