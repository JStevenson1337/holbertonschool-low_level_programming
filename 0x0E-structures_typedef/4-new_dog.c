#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	d->name = name;
	d->age = age;
	d->owner = owner;

	dog_t *d2 = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d2->name = d -> name;
	d2->age = d -> age;
	d2->owner = d -> owner;

}
