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
    Complex num1, num2, num3;
    Complex sumOne, productOne, sumTwo, productTwo;

   
    printf("Enter the first complex number: ");
    scanf("%d %d", &num1.real, &num1.imag);

   
    printf("Enter the second complex number: ");
    scanf("%d %d", &num2.real, &num2.imag);

    printf("Enter the third complex number: ");
    scanf("%d %d", &num3.real, &num3.imag);

    sumOne = add(num1, num2);
    productOne = multiply(num1, num2);
    sumTwo = add(sumOne, num3);
    productTwo = multiply(productOne, num3);

    printf("Initial Sum: %d + %di\n", sumOne.real, sumOne.imag);
    printf("Initial Product: %d + %di\n", productOne.real, productOne.imag);



    printf("Final Sum: %d + %di\n", sumTwo.real, sumTwo.imag);
    printf("Final Product: %d + %di\n", productTwo.real, productTwo.imag);



    return 0;
}
