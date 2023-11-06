#include "dog.h"

/**
 * init_dog - function that initializes
 * a variable of type struct dog.
 * @d: the `dog` struct
 * @name: the name of the `dog`
 * @age: the age of the `dog`
 * @owner: the owner of the `dog`
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

