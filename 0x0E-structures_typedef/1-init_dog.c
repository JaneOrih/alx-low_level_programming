#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes the parmeters in the dog structure
 * @d: points to the structure dog
 * @name: dog name
 * @age: dogs age
 * @owner: dogs care giver
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
