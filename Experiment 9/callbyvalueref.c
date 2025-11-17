#include <stdio.h>

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("\nInside swapValue (call by value):\n");
    printf("a = %d, b = %d\n", a, b);
}

void swapReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("\nInside swapReference (call by reference):\n");
    printf("a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;

    printf("Original values:\n");
    printf("x = %d, y = %d\n", x, y);

    swapValue(x, y);
    printf("\nAfter swapValue (in main):\n");
    printf("x = %d, y = %d\n", x, y);

    swapReference(&x, &y);
    printf("\nAfter swapReference (in main):\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}