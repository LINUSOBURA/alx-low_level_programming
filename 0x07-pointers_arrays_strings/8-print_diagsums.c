#include "main.h"
/**
 * print_diagsum - function to print sunm of two diagonals
 * @a: pointer to array
 * size: size of aaray
 * Code by Linus Obura 
 */
void print_diagsums(int *a, int size) {
    int main_diag_sum = 0;
    int secondary_diag_sum = 0;

    for (int i = 0; i < size; i++) {
        main_diag_sum += *(a + i * size + i);
        secondary_diag_sum += *(a + i * size + (size - i - 1));
    }

    // Custom print function to display the results
    print_integer(main_diag_sum);
    putchar(',');  // Separate the two sums with a comma
    putchar(' ');
    print_integer(secondary_diag_sum);
    putchar('\n');  // Newline after printing both sums
}
