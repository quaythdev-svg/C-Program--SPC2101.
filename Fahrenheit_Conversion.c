//C Program (Fahrenheit conversion).
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:23/10/2025.
Description: Fahrenheit conversion to celsius.
*/
#include <stdio.h> //Pre-processor derivative printf(),scanf().

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
// Apply the conversion formula: (°F - 32) * 5/9
// Use 5.0 and 9.0 to ensure floating-point division
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2fC\n", celsius);

    return 0;
}

