#include <stdio.h>
/**
 * premain - function to be printed before main function
 * Code by Linus Obura
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
