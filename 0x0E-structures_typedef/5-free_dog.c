#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees memory allocated for struct dog
 * @d: struct to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

