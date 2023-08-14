#include "dog.h"
#include <stdio.h>
/**
 *print_dog - Function to print dog
 *@d: pointer to a dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age != 0)
			printf("Age: %f\n", d->Age);
		else
			printf("Age: (nil)\n");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owwner);
		else
			printf("Owner: (nil)"\n);
	}
}
