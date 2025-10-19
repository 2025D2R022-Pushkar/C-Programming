#include <stdio.h>

int main() {
    float r, a, b;
    
    printf("Enter radius for circle: ");
    scanf("%f", &r);
    printf("Circle Area = %.2f\n", 3.14 * r * r);
    printf("Circle Perimeter = %.2f\n", 6.28 * r);
    
    printf("Enter side for square: ");
    scanf("%f", &a);
    printf("Square Area = %.f\n", a * a);
    printf("Square Perimeter = %.f\n", 4 * a);
    
    printf("Enter length and width for rectangle: ");
    scanf("%f %f", &a, &b);
    printf("Rectangle Area = %.2f\n", a * b);
    printf("Rectangle Perimeter = %.2f\n", 2 * (a + b));
    
    return 0;
}