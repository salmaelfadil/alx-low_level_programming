#include "main.h"
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -- function that initalizes a variable of type 
 * struct dog
 * @d: pointer to dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
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
