#include <stdio.h>

int main() {
    int n, i;
    long long fac = 1;
    printf("Enter a +ve integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fac *= i;
    }
    printf("Factorial of %d is %lld\n", n, fac);
    return 0;
}