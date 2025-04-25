#include <stdio.h>

void printNumbersDirect(int n) {
    if (n > 0) {
        printf("%d\n", n);
        printNumbersDirect(n - 1);  
    }
}

int main() {
    int n = 5;
    printf("Direct Recursion:\n");
    printNumbersDirect(n);
    return 0;
}
