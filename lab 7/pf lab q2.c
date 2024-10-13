#include <stdio.h>

int main() {
    int size = 9; // Define the size of the square
    int row = 1;  // Initialize row counter

    // Outer loop for rows
    while (row <= size) {
        int col = 1; // Initialize column counter

        // Inner loop for columns
        while (col <= size) {
            // Print asterisks for the first and last rows
            if (row == 1 || row == size) {
                printf("* "); // Print asterisk followed by a space
            } else {
                // For all other rows, print asterisks at odd column positions
                if (col % 2 != 0) {
                    printf("* "); // Print asterisk for odd columns
                } else {
                    printf("  "); // Print space for even columns
                }
            }
            col++; // Increment column counter
        }

        // Move to the next line after each row
        printf("\n");
        row++; // Increment row counter
    }

    return 0;
}

