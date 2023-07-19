#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the new dog struct whoose variable is to be
 * initialized
 *
 * @d: pointer to the struct of the new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: the owner of the new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
