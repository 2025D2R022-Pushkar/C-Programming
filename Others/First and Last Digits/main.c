#include <stdio.h>

int main() {
    int N, firstDigit, lastDigit;
    
    scanf("%d", &N);

    lastDigit = N % 10;
    firstDigit = N;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    printf("%d %d", firstDigit, lastDigit);

    return 0;
}