#include <stdio.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);

    if (N == 0) {
        count = 1;
    } else {
        if (N < 0) {
            N = -N;
        }
        while (N > 0) {
            N /= 10;
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}