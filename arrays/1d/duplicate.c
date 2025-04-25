#include <stdio.h>

int main() {
    int arr[100], n, i, j, count = 0;

    // Asking user to input the number of elements
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    // Reading array elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    int temp;
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Counting duplicate elements
   printf("Element\tFrequency\n");
    for(i = 0; i < n; i++) {
        if(arr[i] != -1) {
            count = 1;
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // Mark as visited
                }
            }
            if(count>1)
            printf("%d\t%d\n", arr[i], count);
        }
    }
    // Printing the count of duplicate elements
    printf("Number of duplicate elements: %d\n", count);

    return 0;
}