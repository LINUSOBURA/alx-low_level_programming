#include <stdio.h>
#include <stdlib.h>
#include <cytpe.h>
/**
 * main - entry point of the funtion
 * @argc: arguments count
 * @argv: arguments string
 * Return: 0
 * Code by Linus Obura
 */
int is_positive_number(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is not a digit
        if (!isdigit(str[i])) {
            return 0;  // false
        }
    }
    return 1;  // true
}

int main(int argc, char *argv[])
{
    int i, add = 0;

    if (argc < 2) {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++) {
        if (!is_positive_number(argv[i])) {
            printf("Error\n");
            return (1);
        }
        else
            add += atoi(argv[i]);
    }

    printf("%d\n", add);
    return (0);
}

