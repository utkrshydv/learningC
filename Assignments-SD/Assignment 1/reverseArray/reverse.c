//Utkarsh Yadav 23053172

#include <stdio.h>


void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}


void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    printArray(array, size);

    reverseArray(array, size);

    printf("Reversed array:\n");
    printArray(array, size);

    return 0;
}
