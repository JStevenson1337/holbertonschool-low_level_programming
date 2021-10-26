#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/** @brief Prints a dog
 *
 * @param dog The dog to print
 * @return void
 *
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age , d->owner);
}

