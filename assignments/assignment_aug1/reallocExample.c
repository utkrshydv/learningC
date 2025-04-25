#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5, new_n = 10;

    arr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
     
     printf("Before realloc: ");

      for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    arr = (int*) realloc(arr, new_n * sizeof(int));

    for (int i = n; i < new_n; i++) {
        arr[i] = i + 1;
    }

    printf("After realloc: ");

    for (int i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}