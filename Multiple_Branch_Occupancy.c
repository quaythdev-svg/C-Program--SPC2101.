//C Program (Room Occupancy(Multiple Branches))
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:09/10/2025.
Description: 3D array for multiple branches 
*/
#include <stdio.h> //Pre-processor Derivative printf().
#include <stdlib.h> // Include standard library for rand() and srand().
#include <time.h> // Include time library for seeding the random number generator.

int main() {
	// Declare a 3D array to represent the hotel chain.
    // Dimensions are: 3 branches, 5 floors per branch, 10 rooms per floor.
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms
    int branch, floor, room;
    // Declare a counter for the total number of occupied rooms across all branches.
    int totalOccupied = 0;

    // This ensures that a different set of "random" occupancy is generated
    // each time the program is run.
    srand(time(0)); // For random occupancy

	
    // Use nested loops to iterate through each branch, floor, and room.
    // The outer loop iterates through the branches (0 to 2).
    // The middle loop iterates through the floors (0 to 4) within each branch.
    // The inner loop iterates through the rooms (0 to 9) on each floor.
    // Assign random occupancy (1 or 0)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);
 // Print the final count of occupied rooms
    return 0;
}
