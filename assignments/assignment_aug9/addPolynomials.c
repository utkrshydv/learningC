#include <stdio.h>
#include <stdlib.h>

#define MAX_DEGREE 100

void addPolynomials(int poly1[], int poly2[], int result[], int degree1, int degree2) {
    int i;
    int maxDegree = (degree1 > degree2) ? degree1 : degree2;

    for (i = 0; i <= maxDegree; i++) {
        result[i] = ((i <= degree1) ? poly1[i] : 0) + ((i <= degree2) ? poly2[i] : 0);
    }
}

void printPolynomial(int poly[], int degree) {
    int i;
    for (i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i < degree) {
                printf(" %c ", (poly[i] > 0) ? '+' : '-');
            }
            printf("%d", abs(poly[i]));
            if (i > 0) {
                printf("x");
                if (i > 1) {
                    printf("^%d", i);
                }
            }
        }
    }
    printf("\n");
}

int main() {
    int degree1, degree2;
    int poly1[MAX_DEGREE + 1] = {0};
    int poly2[MAX_DEGREE + 1] = {0};
    int result[MAX_DEGREE + 1] = {0};

    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &degree1);

    printf("Enter the coefficients of the first polynomial (from constant term to highest degree term):\n");
    for (int i = 0; i <= degree1; i++) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly1[i]);
    }

    printf("Enter the degree of the second polynomial: ");
    scanf("%d", &degree2);

    printf("Enter the coefficients of the second polynomial (from constant term to highest degree term):\n");
    for (int i = 0; i <= degree2; i++) {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly2[i]);
    }

    addPolynomials(poly1, poly2, result, degree1, degree2);

    printf("First Polynomial: ");
    printPolynomial(poly1, degree1);

    printf("Second Polynomial: ");
    printPolynomial(poly2, degree2);

    printf("Sum of Polynomials: ");
    printPolynomial(result, (degree1 > degree2) ? degree1 : degree2);

    return 0;
}
