#include <stdio.h>

int main() {
    int size = 9; // Define the size of the square
    int row = 1;  // Initialize row counter

    // Outer loop for rows
    while (row <= size) {
        int col = 1; // Initialize column counter

        // Inner loop for columns
        while (col <= size) {
            // Check for borders or odd intersections
            if (row == 1 || row == size) {
                // For the first and last rows, print asterisks with spaces in between
                if (col % 2 != 0) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else if (col == 1 || col == size || (row % 2 != 0 && col % 2 != 0)) {
                // Print asterisk for the borders and odd intersections
                printf("*");
            } else {
                // Print space for other positions
                printf(" ");
            }
            col++; // Increment column counter
        }

        // Move to the next line after each row
        printf("\n");
        row++; // Increment row counter
    }

    return 0;
}
