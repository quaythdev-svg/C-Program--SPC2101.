// C Program (University Results - Binary File)
/*
Name: Kimani Keth Gachunu
Registration Number: CT101/G/24892/24
Date: 06/11/2025
Description:
This program allows the user to enter student records (name, registration number, and marks),
saves them into a binary file named results.dat, and then reads and displays all records.
*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student information
struct Student {
    char name[50];
    char regNumber[20];
    int totalMarks;
};

int main() {
    FILE *filePointer;
    struct Student studentRecord;
    int numStudents, i;

    // Open binary file in write-binary mode to create or overwrite
    filePointer = fopen("results.dat", "wb");
    if (filePointer == NULL) {
        printf("Error: Could not create the file 'results.dat'.\n");
        return 1;
    }

    // Ask how many student records to enter
    printf("Enter number of students: ");
    scanf("%d", &numStudents);
    getchar(); // consume newline from buffer

    // Input and write each student record
    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        fgets(studentRecord.name, sizeof(studentRecord.name), stdin);
        studentRecord.name[strcspn(studentRecord.name, "\n")] = '\0'; // remove newline

        printf("Registration Number: ");
        fgets(studentRecord.regNumber, sizeof(studentRecord.regNumber), stdin);
        studentRecord.regNumber[strcspn(studentRecord.regNumber, "\n")] = '\0';

        printf("Total Marks: ");
        scanf("%d", &studentRecord.totalMarks);
        getchar(); // consume newline

        // Write the record into the file
        fwrite(&studentRecord, sizeof(struct Student), 1, filePointer);
    }

    fclose(filePointer);
    printf("\nAll student records have been saved to 'results.dat'.\n");

    // Now reopen the file in read mode and display the data
    filePointer = fopen("results.dat", "rb");
    if (filePointer == NULL) {
        printf("Error: Could not open 'results.dat' for reading.\n");
        return 1;
    }

    printf("\n--- Student Examination Results ---\n");

    // Read and display all student records
    while (fread(&studentRecord, sizeof(struct Student), 1, filePointer) == 1) {
        printf("Name: %s, Reg No: %s, Marks: %d\n",
               studentRecord.name,
               studentRecord.regNumber,
               studentRecord.totalMarks);
    }

    fclose(filePointer);
    printf("-----------------------------------\n");

    return 0;
}
