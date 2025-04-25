#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* replace(const char* str) {
    int len = strlen(str);
    char* compressed = malloc(len * 2 + 1);  // Worst case: each char followed by a count
    int write = 0, count = 1;

    for (int read = 1; read <= len; read++) {
        if (read < len && str[read] == str[read-1]) {
            count++;
        } else {
            compressed[write++] = str[read-1];
            if (count > 1) {
                int digits = sprintf(&compressed[write], "%d", count);
                write += digits;
            }
            count = 1;
        }
    }
    compressed[write] = '\0';

    if (write >= len) {
        strcpy(compressed, str);
    }

    return compressed;
}

int main() {
    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove newline character if present
    input[strcspn(input, "\n")] = 0;

    char* compressed = replace(input);
    
    printf("Original string: %s\n", input);
    printf("Compressed string: %s\n", compressed);

    free(compressed);  // Don't forget to free the allocated memory
    return 0;
}