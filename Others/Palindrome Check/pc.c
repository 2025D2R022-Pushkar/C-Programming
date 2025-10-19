#include <stdio.h>

int main() {
    int N, original, reversed = 0, remainder;
    
    scanf("%d", &N);

    original = N;

    while (N > 0) {
        remainder = N % 10;
        reversed = reversed * 10 + remainder;
        N = N / 10;
    }

    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}