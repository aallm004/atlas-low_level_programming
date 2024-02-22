#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints information about dog
 *
 * @d: struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
		{
			if (d->age)
				printf("Age: %.6f\n", d->age);
			else
				printf("Age: (nil)\n");
			
			if (d->name != NULL)
				printf("Name: %s\n", d->name);
			else
				printf("Name: (nil)\n");

			if (d->owner != NULL)
				printf("Owner: %s\n", d->owner);
			else
				printf("Owner: (nil)\n");

		}
}
