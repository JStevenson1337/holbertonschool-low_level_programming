#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - Initialize the dog
 * @d pointer to the dog
 * @name name of the dog
 * @age age of the dog
 * @owner owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
