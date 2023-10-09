#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
* new_dog - function to create a new dog
* @name: dog's name
* @age: dogs age
* @owner: dogs owner
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);

	newDog->name = strdup(name);
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = strdup(owner);
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
