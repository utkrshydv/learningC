#include <stdio.h>


typedef struct {
    int real;
    int imag;
} Complex;


Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}


Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

int main() {
    Complex num1, num2, sum, product;

   
    printf("Enter the first complex number: ");
    scanf("%d %d", &num1.real, &num1.imag);

   
    printf("Enter the second complex number: ");
    scanf("%d %d", &num2.real, &num2.imag);

    sum = add(num1, num2);

    product = multiply(num1, num2);

    printf("Sum: %d + %di\n", sum.real, sum.imag);
    printf("Product: %d + %di\n", product.real, product.imag);

    return 0;
}
