//C Program (Retailshop-daily sales)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:06/11/2025.
Description:This program reads all sales transactions, which are stored as numbers on separate lines in a text file named sales.txt. It calculates the sum of all transactions and displays the total sales for the day.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *filePointer;
    double transactionAmount;
    double totalSales = 0.0;

    // Try opening the file in read mode
    filePointer = fopen("sales.txt", "r");

    // If file doesn't exist, create one
    if (filePointer == NULL) {
        printf("File 'sales.txt' not found. Creating a new one...\n");
        filePointer = fopen("sales.txt", "w");
        if (filePointer == NULL) {
            printf("Error: Could not create 'sales.txt'.\n");
            return 1;
        }

        // Add example data
        fprintf(filePointer, "120.50\n250.75\n99.99\n310.25\n");
        fclose(filePointer);

        printf("Sample data added. Please run the program again to calculate total sales.\n");
        return 0;
    }

    // Read and sum transactions
    while (fscanf(filePointer, "%lf", &transactionAmount) == 1) {
        totalSales += transactionAmount;
    }

    fclose(filePointer);

    printf("Total sales for the day: $%.2f\n", totalSales);

    return 0;
}
