//C Program (Electric Billing).
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:23/10/2025.
Description:conditional logic to handle three billing tiers.
*/
#include <stdio.h> //Pre-processor derivative printf(),scanf().

// Function to calculate electricity bill
float calculateElectricBill(int units) {
    float total = 0;  //initialize bill to 0.
//Tiered pricing logic based on units consumed.
// Charge for the first 100 units at KSh. 10 per unit
    if (units <= 100) {
        total = units * 10;
// Charge the first 100 units at KSh. 10, and remaining units (up to 100) at KSh. 15
    } else if (units <= 200) {
        total = (100 * 10) + (units - 100) * 15;
// Charge the first 100 at KSh. 10, next 100 at KSh. 15, and the rest at KSh. 20
    } else {
        total = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return total;
}

int main() {
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    float bill = calculateElectricBill(units);
    printf("Total Electric Bill: KSh. %.2f\n", bill);

    return 0;
}
