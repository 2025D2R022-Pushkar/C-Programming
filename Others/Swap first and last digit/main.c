#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        // Basic error check for invalid input
        printf("Invalid input.\n");
        return 1;
    }

    // 1. Handle the sign and get the absolute value
    int sign = (number < 0) ? -1 : 1;
    int abs_number = (number < 0) ? -number : number; // Equivalent to abs(number)

    // Handle single-digit numbers (0-9 and -0 to -9)
    if (abs_number < 10) {
        printf("%d\n", number); // Swapping doesn't change it
        return 0;
    }

    // 2. Find last digit
    int lastDigit = abs_number % 10;
    
    // 3. Find the power of 10 for the first digit's place (e.g., for 12345, power_of_10 will be 10000)
    int power_of_10 = 1;
    int tempNumber = abs_number;
    while (tempNumber >= 10) {
        power_of_10 *= 10;
        tempNumber /= 10;
    }
    
    // 4. Find first digit (tempNumber now holds it)
    int firstDigit = tempNumber; // e.g., for 12345, firstDigit is 1

    // 5. Isolate the middle part (e.g., for 12345, middlePart is 234)
    // Remove the first digit: abs_number % power_of_10 -> 2345
    // Remove the last digit: (abs_number % power_of_10) / 10 -> 234
    int middlePart = (abs_number % power_of_10) / 10;

    // 6. Construct the new number (lastDigit * power_of_10 + middlePart * 10 + firstDigit)
    int swappedNumber = lastDigit * power_of_10 + middlePart * 10 + firstDigit;
    
    // 7. Apply the original sign
    swappedNumber *= sign;
    
    printf("Swapped number: %d\n", swappedNumber);
    
    return 0;
}