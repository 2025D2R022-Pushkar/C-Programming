#include <stdio.h>

int main() {
    FILE *fp;
    
    // Write to file
    fp = fopen("data.txt", "w");
    fprintf(fp, "Hello, World!\n");
    fprintf(fp, "This is a test file.\n");
    fclose(fp);
    printf("File written successfully!\n");
    
    // Read from file
    fp = fopen("data.txt", "r");
    char buffer[100];
    
    printf("\nFile contents:\n");
    while (fgets(buffer, 100, fp) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fp);
    
    return 0;
}