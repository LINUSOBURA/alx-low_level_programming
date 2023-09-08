#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point of our code
 * 
 * Return: (0) success
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int mod = n % 10;

    if (mod > 5)
    {
        printf("The last digit of %d is %d and is greater than 5", n, mod);
    }
    else if (mod == 0)
    {
        printf("The last digit of %d is %d and is 0", n, mod);
    }
    else if (mod < 6 && mod != 0)
    {
        printf("The last digit of %d is %d and is less than 6 and not 0", n, mod);
    }
	return (0);
}
