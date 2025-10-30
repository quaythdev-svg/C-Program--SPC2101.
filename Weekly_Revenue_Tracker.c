//C Program (Weekly Revenue Tracker.)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:09/10/2025.
Description:1D array for weekly revenue tracker.
*/
#include <stdio.h> //Pre-processor derivative printf(),scanf().

int main() {
    float revenue[7];  //  array to store revenue for 7 days
    float total = 0, average;   // Declare variables for total and average revenue, initializing total to 0
    int i; //Loop counter variable 

    printf("Enter revenue for each day of the week:\n");
    //Loopfor all the seven days.
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  // Add the current day's revenue to the running total.
    }
   // Calculate the average daily revenue by dividing the total by 7.0
    // Use 7.0 to ensure floating-point division
    average = total / 7.0;

	// Print the total weekly revenue, formatted to two decimal places
    printf("\nTotal weekly revenue: \t%.2f\n", total);
    // Print the average daily revenue, formatted to two decimal places
    printf("Average daily revenue: \t%.2f\t\n", average);

    return 0;
}
