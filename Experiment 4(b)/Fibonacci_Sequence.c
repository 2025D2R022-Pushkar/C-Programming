#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive number.\n");
    }
    else if (n == 1) {
        printf("Fibonacci sequence: %lld\n", first);
    }
    else {
        printf("Fibonacci sequence: %lld, %lld", first, second);
        
        for (i = 3; i <= n; i++) {
            next = first + second;
            printf(", %lld", next);
            first = second;
            second = next;
        }
        printf("\n");
    }
    return 0;
}