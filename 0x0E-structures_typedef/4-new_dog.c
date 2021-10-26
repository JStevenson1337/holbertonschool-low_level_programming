#include "dog.h"
#include <stdio.h>
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
	return d;
}
