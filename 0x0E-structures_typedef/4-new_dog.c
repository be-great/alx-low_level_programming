#include "dog.h"

/**
 * _strlen - return the length of giving string
 * @s: string to check
 * Return: the length of the giving string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * *new_dog -  function that creates a dog.
 * Discription: function that create new object dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Return: object dog (pointer to a structure dog)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len0, len1, i;

	/* because we have to to return pointer*/
	d = malloc(sizeof(dog_t));
	if (!d)
	{
		free(d);
		return (NULL);
	}
	len0 = _strlen(name);
	len1 = _strlen(owner);
	d->name = malloc(sizeof(char) * (len0 + 1));
	d->owner = malloc(sizeof(char) * (len1 + 1));
	if (!d->name || !d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	for (i = 0; i < len0; i++)
	{
		d->name[i] = name[i];
	}
	d->name[i] = '\0';
	for (i = 0; i < len1; i++)
	{
		d->owner[i] = owner[i];
	}
	d->owner[i] = '\0';
	d->age = age;
	return (d);
}

