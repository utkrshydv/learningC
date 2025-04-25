#include <stdio.h>

void functionA(int n);
void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        printf("%d\n", n);
        functionB(n - 1); 
    }
}


void functionB(int n) {
    if (n > 0) {
        printf("%d\n", n);
        functionA(n - 1);  
    }
}

int main() {
    int n = 5;
    printf("Indirect Recursion:\n");
    functionA(n);
    return 0;
}
