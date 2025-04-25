#include <stdio.h>
#include <stdlib.h>

void printPolynomial(int** poly, int terms) {
    printf("f(x) = ");
    for(int i = 0; i < terms; i++) {
        if(i > 0 && poly[0][i] > 0) {
            printf(" + ");
        }

        if(poly[0][i] != 0) {
            if(poly[1][i] == 0) {
                printf("%d", poly[0][i]);
            } else {
                printf("%dx^%d", poly[0][i], poly[1][i]);
            }
        }
    }
    printf("\n");
}

int** multiplyPolynomial(int** poly1, int** poly2, int terms1, int terms2, int* resultTerms) {
    int maxTerms = terms1 * terms2;
    int** prodPoly = malloc(sizeof(int*) * 2);
    for(int i = 0; i < 2; i++) {
        prodPoly[i] = calloc(maxTerms, sizeof(int));
    }
    
    int k = 0;

    for(int i = 0; i < terms1; i++) {
        for(int j = 0; j < terms2; j++) {
            int coeff = poly1[0][i] * poly2[0][j];
            int exp = poly1[1][i] + poly2[1][j];

            int found = 0;
            for(int l = 0; l < k; l++) {
                if(prodPoly[1][l] == exp) {
                    prodPoly[0][l] += coeff;
                    found = 1;
                    break;
                }
            }

            if(!found) {
                prodPoly[0][k] = coeff;
                prodPoly[1][k] = exp;
                k++;
            }
        }
    }

    *resultTerms = k;
    prodPoly[0] = realloc(prodPoly[0], sizeof(int) * k);
    prodPoly[1] = realloc(prodPoly[1], sizeof(int) * k);

    return prodPoly;
}

int** acceptPolynomial(int terms) {
    int** poly = malloc(sizeof(int*) * 2);
    for(int i = 0; i < 2; i++) {
        poly[i] = malloc(sizeof(int) * terms);
    }

    for(int i = 0; i < terms; i++) {
        printf("Enter coefficient: ");
        scanf("%d", &poly[0][i]);
        printf("Enter exponent: ");
        scanf("%d", &poly[1][i]);
    }
    return poly;
}

int main() {
    int n, m, total;
    printf("Number of polynomials you want to multiply: ");
    scanf("%d", &total);

    int*** storePoly = malloc(sizeof(int**) * total);
    int* term = malloc(sizeof(int) * total);
    
    for(int i = 0; i < total; i++) {
        printf("For Polynomial %d:\n", i + 1);
        printf("No. of terms: ");
        scanf("%d", &term[i]);
        storePoly[i] = acceptPolynomial(term[i]);
    }

    printf("The polynomials you entered are: \n");
    for(int i = 0; i < total; i++) {
       printPolynomial(storePoly[i], term[i]);
       printf("\n");
    }

    int resultTerms;
    int** prodPoly = multiplyPolynomial(storePoly[0], storePoly[1], term[0], term[1], &resultTerms);

    for(int i = 2; i < total; i++) {
        int newTerms;
        prodPoly = multiplyPolynomial(prodPoly, storePoly[i], resultTerms, term[i], &newTerms);
        resultTerms = newTerms;
    }

    printf("The product of the polynomials is:\n");
    printPolynomial(prodPoly, resultTerms);

    // Free allocated memory
    for(int i = 0; i < total; i++) {
        for(int j = 0; j < 2; j++) {
            free(storePoly[i][j]);
        }
        free(storePoly[i]);
    }
    free(storePoly);
    free(term);

    for(int i = 0; i < 2; i++) {
        free(prodPoly[i]);
    }
    free(prodPoly);

    return 0;
}
