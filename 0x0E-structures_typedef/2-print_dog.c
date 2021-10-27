#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function start
 * Description: Prints a dog
 * @d: pointer to dog
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Owner: %s\n", d->owner);
	}
	else
		return;
}
