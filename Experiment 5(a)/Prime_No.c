#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    while (i < n) {
        if (n % i == 0) {
            printf("%d is not a prime number.\n", n);
            return 0;
        }
        i++;
    }

    printf("%d is a prime number.\n", n);
    return 0;
}