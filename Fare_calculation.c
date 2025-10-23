//C Program (Fare  Calculator).
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:23/10/2025.
Description:Calculating fare in relation with distance.
*/
#include <stdio.h> //Pre-processor derivative printf(),scanf().

// Function to calculate the total fare based on distance traveled.
// It takes a floating-point number 'distance' (in kilometers) as input.
// It returns a floating-point number representing the total fare.
float calculateFare(float distance) {
    return distance * 50;  // Fare rate is 50 per kilometer
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    float fare = calculateFare(distance);
    printf("Total Fare: KSh. %.2f\n", fare);

    return 0;
}
