#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;    // Get last digit and add to sum
        num = num / 10;    // Remove last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
