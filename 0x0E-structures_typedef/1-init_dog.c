#include "dog.h"
/**
 *init_dog - Function to initiat a dog struct
 *@d: pointer to  a dog
 *@name: pointer
 *@age: input
 *@owner: input pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
