#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long num, ogNum, rem, sum = 0;
    unsigned long long dig = 0;

    printf("Input number: ");
    scanf("%llu", &num);

    ogNum = num;

    while (ogNum != 0) {
        ogNum /= 10;
        dig++;
    }

    ogNum = num;

    while (ogNum != 0) {
        rem = ogNum % 10;
        sum += pow(rem, dig);
        ogNum /= 10;
    }

    if (sum == num) {
        printf("The number is Armstrong.\n");
    } else {
        printf("The number isn't Armstrong.\n");
    }

    return 0;
}
