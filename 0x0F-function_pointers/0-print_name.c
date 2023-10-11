#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - function that prints a name;
* @name: pointer to a string name
* @f: pointer to a function
* Code by Linus Obura
*/

void f(char c);

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
* f - function to print a name
* @c: character to be printed
*/
void f(char c)
{
	printf("%c", c);
}
