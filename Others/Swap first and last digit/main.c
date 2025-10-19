#include <stdio.h>
#include <math.h>

int main() {
    int number, firstDigit, lastDigit, tempNumber, numDigits;
    
    scanf("%d", &number);
    
    // Handle negative numbers
    int sign = 1;
    if (number < 0) {
        sign = -1;
        number = -number;
    }
    
    // Find last digit
    lastDigit = number % 10;
    
    // Count digits
    tempNumber = number;
    numDigits = 0;
    while (tempNumber != 0) {
        tempNumber /= 10;
        numDigits++;
    }
    
    // Find first digit
    firstDigit = number / pow(10, numDigits - 1);
    
    // Remove first and last digits
    int middlePart = (number % (int)pow(10, numDigits - 1)) / 10;
    
    // Construct new number with swapped first and last digits
    int swappedNumber = lastDigit * pow(10, numDigits - 1) + middlePart * 10 + firstDigit;
    
    // Apply the original sign
    swappedNumber *= sign;
    
    printf("%d", swappedNumber);
    
    return 0;
}