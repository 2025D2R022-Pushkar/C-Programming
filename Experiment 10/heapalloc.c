#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr_malloc, *arr_calloc;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr_malloc = (int *)malloc(n * sizeof(int));
    if (arr_malloc == NULL) {
        printf("malloc failed");
        return 1;
    }

    for (i = 0; i < n; i++) {
        arr_malloc[i] = i + 1;
    }

    printf("Values in malloc: ");
    for (i = 0; i < n; i++) {
        printf("%d", arr_malloc[i]);
    }

    arr_calloc = (int *)calloc(n, sizeof(int));
    if (arr_calloc == NULL) {
        printf("calloc failed");
        free(arr_malloc);
        return 1;
    }

    printf("Values in calloc: ");
    for (i = 0; i < n; i++) {
        printf("%d", arr_calloc[i]);
    }

    free(arr_malloc);
    free(arr_calloc);

    printf("Mem successfully freed");
    return 0;
}