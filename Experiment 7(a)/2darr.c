#include <stdio.h>

int main() {
    int row, cols, r, c;

    printf("Enter the number of rows and columns: "); 
    scanf("%d %d", &row, &cols);
    int matrix[row][cols];
    
    printf("Enter the elements of the array:\n"); 
    for (r = 0; r < row; r++) {
        for (c = 0; c < cols; c++) { 
            scanf("%d", &matrix[r][c]);
        }
    }

    printf("The elements of the array are:\n"); 
    for (r = 0; r < row; r++) {
        for (c = 0; c < cols; c++) { 
            printf("%d ", matrix[r][c]);
        }
        printf("\n");
    }
    return 0;
}