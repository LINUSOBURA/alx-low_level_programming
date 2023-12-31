#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to print dog struct
 * @d: the dog to be printed
 * Code by Linus Obura
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
