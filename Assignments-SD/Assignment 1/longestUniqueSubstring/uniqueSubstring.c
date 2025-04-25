//Utkarsh Yadav 23053172

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestUniqueSubstring(const char* str, int* length) {
    int n = strlen(str);
    int maxLength = 0;
    int start = 0;
    int maxStart = 0;
    int lastIndex[256] = {0};

    for (int i = 0; i < n; i++) {
        start = (start > lastIndex[str[i]]) ? start : lastIndex[str[i]];
        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
            maxStart = start;
        }
        lastIndex[str[i]] = i + 1;
    }

    *length = maxLength;
    char* result = malloc((maxLength + 1) * sizeof(char));
    strncpy(result, str + maxStart, maxLength);
    result[maxLength] = '\0';

    return result;
};

int main() {
    const char* str = "abcabcbb";
    int length;
    char* result = longestUniqueSubstring(str, &length);
    
    printf("Longest substring with unique characters: %s\n", result);
    printf("Length: %d\n", length);

    free(result); 
    return 0;
}