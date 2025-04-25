//Utkarsh Yadav 23053172

#include <stdio.h>
#include <stdlib.h>

void causeMemoryLeak() {
    int* leakyArray = (int*)malloc(10 * sizeof(int));
    if (!leakyArray) {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }

 
    for (int i = 0; i < 10; i++) {
        leakyArray[i] = i;
    }

    // if we don't free the allocated space,
    // it'll cause memory leak
    free(leakyArray);
}

int main() {
    for (int i = 0; i < 100; i++) {
        causeMemoryLeak();
    }

    printf("Program finished\n");
    return 0;
}
