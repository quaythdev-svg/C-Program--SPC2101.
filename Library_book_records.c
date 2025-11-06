//C Program (Library book records)
/*
Name:Kimani Keth Gachunu.
Registration Number:CT101/G/24892/24.
Date:06/11/2025.
Description:This program opens a text file named borrowed_books.txt in append mode ("a") so that new book titles are added to the end of the file without overwriting existing content.
*/
#include <stdio.h> //pre-processor derivative scanf(),printf().
#include <stdlib.h> // For exit()
#include <string.h> // For string functions

int main() {
    FILE *filePointer;  // A pointer to a FILE structure, used to manage the file stream.
    char bookTitle[100]; // A Character array (buffer) to store the book title
    /*
    Open the file in append mode. If it doesn't exist, it will be created.
    Open the file named "borrowed_books.txt" in append mode ("a").
    This mode ensures that new data is added to the end of the file, preserving existing records.
    */
    filePointer = fopen("borrowed_books.txt", "a");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Get the book title from the librarian
    printf("Enter the title of the book to record: ");
    fgets(bookTitle, 100, stdin); // Use fgets to read a whole line, including spaces
    
    // Remove the newline character that fgets() reads
    bookTitle[strcspn(bookTitle, "\n")] = 0;

    // Write the book title to the file, followed by a newline
    fprintf(filePointer, "%s\n", bookTitle);

    // Close the file
    fclose(filePointer);

    // Display a confirmation message
    printf("Confirmation: The title '%s' has been successfully stored.\n", bookTitle);

    return 0;
}
