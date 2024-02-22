#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initializes a variable
 *
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothing (0)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
	 	d->age = age;
	 	d->owner = owner;
	}
}
