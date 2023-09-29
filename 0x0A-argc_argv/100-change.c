#include <stdio.h>
#include <stdlib.h>
/**
 * main -function to calculate change
 * @argc: arguments count
 * @argv: arguments string
 * Return: 0
 * Code by Linus Obura
 */

int main(int argc, char *argv[])
{
    // Check for the correct number of arguments
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    // If the cents are negative, print 0
    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    // Define coin values
    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = 0;

    // Loop through the coins and subtract them from cents
    for (int i = 0; i < 5 && cents > 0; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            num_coins++;
        }
    }

    printf("%d\n", num_coins);
    return 0;
}

