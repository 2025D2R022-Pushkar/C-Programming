#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fac = 1;

    printf("Enter a +ve integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Can't find factorial for -ve nos");
    } else {
        for (i = 1; i <= n; i++) {
            fac *= i;
        }
        printf("Factorial of %d is %llu\n", n, fac);
    }
    return 0;
}