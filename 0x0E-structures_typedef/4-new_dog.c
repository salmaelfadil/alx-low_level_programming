#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -- function that creates a new dog
 * @name: name of the dog
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i = 0;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (; name[i]; i++)
		;
	d->name = malloc((i + 1) * sizeof(char));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		d->name[i] = name[i];

	d->age = age;

	for (i = 0; owner[i]; i++)
		;
	d->owner = malloc((i + 1) * sizeof(char));

	if ((d->owner) == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		d->owner[i] = owner[i];
	return (d);
}
