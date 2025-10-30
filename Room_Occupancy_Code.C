//C Program (Room Occupancy(One Branch).)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:09/10/2025.
Description: 2D array for room occupancy in one branch
*/
#include <stdio.h> //Pre-processor Derivative printf().
#include <stdlib.h> // Include standard library for rand() and srand().
#include <time.h> // Include time library for seeding the random number generator.

int main() {
	  // Declare a 2D array to represent the hotel's rooms.
    // The dimensions are 5 rows (for floors) and 10 columns (for rooms).
    int occupancy[5][10]; // 5 floors, 10 rooms per floor
      
    // Declare integer variables to be used as loop counters and for counting
    // the number of occupied and vacant rooms per floor.
    int floor, room, occupied, vacant;

	 // Seed the random number generator with the current time.
    // This ensures that a new set of "random" occupancy is generated each time
    // the program is run. Without this, the same sequence would be generated every time.
    srand(time(0)); // For random occupancy

    // Generate random occupancy (1 = occupied, 0 = vacant)
      // Loop through each floor and room to assign random occupancy.
    // The outer loop iterates through the floors (0 to 4).
    for (floor = 0; floor < 5; floor++) {
    	// The inner loop iterates through the rooms (0 to 9) on the current floor.
        for (room = 0; room < 10; room++) {
        	   // Assign a random value (0 or 1) to each room.
            // `rand() % 2` gives the remainder of a division by 2, which is always 0 or 1.
            occupancy[floor][room] = rand() % 2;
        }
    }

    // Display occupancy per floor
       // Outer loop to process each floor.
    for (floor = 0; floor < 5; floor++) {
    	// Initialize the occupied and vacant counters for the current floor to zero.
        occupied = vacant = 0;
          // Inner loop to iterate through the rooms on the current floor and count occupancy.
        for (room = 0; room < 10; room++) {
        	   // Check the status of the current room.
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
          // Print the summary for the current floor.
        // We add 1 to `floor` so the output is user-friendly (e.g., "Floor 1" instead of "Floor 0").
        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}
