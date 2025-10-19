#include <stdio.h>
#define PI = 3.14

int main() {
    int mode, a;
    float r, l, w;
    printf("Enter the number to select the mode for Area:\n1: Circle\n2: Square\n3: Rectangle\n");
    printf("Enter your selection: ");
    scanf("%d", &mode);

    switch (mode) {
        case 1:
            printf("Input the radius: ");
            scanf("%f", &r);
            printf("Area: %.2f", 3.14 * r * r);
            break;
        case 2:
            printf("Input the length of the side: ");
            scanf("%d", &a);
            printf("Area: %d", a * a);
            break;
        case 3:
            printf("Input the length and width: ");
            scanf("%f %f", &l, &w);
            printf("Area: %.2f", l * w);
            break;
        default:
            printf("Not a valid input, please check your input and try again.");
            break;
    }
}