#include <stdio.h>

void add(int a, int b) { 
    printf("Result: %d\n", a + b); 
}

void subtract(int a, int b) { 
    printf("Result: %d\n", a - b); 
}

void multiply(int a, int b) { 
    printf("Result: %d\n", a * b); 
}

void divide(int a, int b) { 
    if (b != 0) 
        printf("Result: %.2f\n", (float)a / b); 
    else 
        printf("Division by zero error!\n"); 
}

int main() { 
    int choice, num1, num2;

    printf("Enter two numbers: "); 
    scanf("%d %d", &num1, &num2);

    printf("Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n"); 
    scanf("%d", &choice);

    switch (choice) { 
        case 1: 
            add(num1, num2); 
            break;
        case 2: 
            subtract(num1, num2); 
            break;
        case 3: 
            multiply(num1, num2); 
            break;
        case 4: 
            divide(num1, num2); 
            break;
        default: 
            printf("Invalid choice!\n"); 
    }

    return 0; 
}