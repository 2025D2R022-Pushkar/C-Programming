#include <stdio.h>

int main() {
    int num, reversed = 0;

    scanf("%d", &num);

    while (num != 0) {
        int lastDigit = num % 10;
        reversed = (reversed * 10) + lastDigit;
        num /= 10;
    }

    printf("%d", reversed);
    return 0;
}