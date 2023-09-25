#include "main.h"
void print_chessboard(char (*a)[8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // Assuming 'a' is a 2D array representing the chessboard, 
            // print each character from the array.
            // Use a simple custom putchar function to display the character.
            putchar(a[i][j]);
        }
        // Print a newline after each row using the same custom putchar function.
        putchar('\n');
    }
}
