#include "dog.h"
#include <stdlib.h>
/**
 * len - length of a string
 * @s: string to be counted
 * Return: length of the string
 */

int len(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
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
	int l1 = len(name);
	int l2 = len(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc((l1 + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (; name[i] != '\0'; i++)
		d->name[i] = name[i];
	d->name[i++] = '\0';

	d->age = age;

	d->owner = malloc((l2 + 1) * sizeof(char));
	if ((d->owner) == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		d->owner[i] = owner[i];
	d->owner[i++] ='\0';
	return (d);
}
