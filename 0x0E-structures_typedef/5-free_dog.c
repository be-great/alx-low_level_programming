#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * Discription: free the memory of the structure argumnet
 * @d: the dog structure
 */
void free_dog(dog_t *d)
{

	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}
