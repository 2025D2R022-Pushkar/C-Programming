#include <stdio.h>

int main() {
    int r1, c1, r2, c2, r, c, k;
    
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Not possible!\n");
        return 0;
    }
    
    int mat1[r1][c1], mat2[r2][c2], product[r1][c2];
    
    printf("Enter elements of first matrix:\n");
    for (r = 0; r < r1; r++)
        for (c = 0; c < c1; c++)
            scanf("%d", &mat1[r][c]);
    
    printf("Enter elements of second matrix:\n");
    for (r = 0; r < r2; r++)
        for (c = 0; c < c2; c++)
            scanf("%d", &mat2[r][c]);
    
    for (r = 0; r < r1; r++)
        for (c = 0; c < c2; c++) {
            product[r][c] = 0;
            for (k = 0; k < c1; k++)
                product[r][c] += mat1[r][k] * mat2[k][c];
        }
    
    printf("Product of the matrices:\n");
    for (r = 0; r < r1; r++) {
        for (c = 0; c < c2; c++)
            printf("%d ", product[r][c]);
        printf("\n");
    }
    
    return 0;
}