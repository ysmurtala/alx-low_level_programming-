#include "dog.h"
#include <stdio.h>

/**
 * init_dog - init a dog
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

		if (d != NULL)
		{
			d->name = name;
			d->age = age;
			d->owner = owner;
		}

}
