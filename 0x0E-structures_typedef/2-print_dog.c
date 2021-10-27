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
	if ( d != NULL )
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
