#include <stdio.h>


typedef struct {
    int real;
   int imag;
} Complex;


void readComplexNumbers(Complex numbers[], int size);
void displayComplexNumbers(const Complex numbers[], int size);

int main() {

    Complex numbers[10];

    readComplexNumbers(numbers, 10);
    displayComplexNumbers(numbers, 10);

    return 0;
}


void readComplexNumbers(Complex numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter real part of complex number %d: ", i + 1);
        scanf("%d", &numbers[i].real);
        printf("Enter imaginary part of complex number %d: ", i + 1);
        scanf("%d", &numbers[i].imag);
    }
}


void displayComplexNumbers(const Complex numbers[], int size) {
    printf("\nThe complex numbers are:\n");
    for (int i = 0; i < size; i++) {
        printf("Complex number %d: %d + %di\n", i + 1, numbers[i].real, numbers[i].imag);
    }
}
