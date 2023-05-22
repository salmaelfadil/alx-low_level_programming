#include "dog.h"
#include <stdlib.h>
/**
 * print_dog -- prints a struct dog
 * @d: pointer to struct of type dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		if (d->age == NULL)
			printf("Age: (nil)\n");
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Name: %s\nAge: %f\nOwner:%s\n", d->name, d->age, d->owner);
	}
}
