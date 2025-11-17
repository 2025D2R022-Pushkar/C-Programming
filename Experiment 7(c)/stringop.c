#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    int length, comparison;
    
    // Length
    length = strlen(str1);
    printf("Length of '%s': %d\n", str1, length);
    
    // Copy
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);
    
    // Concatenation
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    
    // Comparison
    comparison = strcmp(str2, str3);
    printf("Comparison result: %d\n", comparison);
    
    return 0;
}