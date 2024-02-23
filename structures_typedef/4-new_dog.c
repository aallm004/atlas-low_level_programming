#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - function that creates a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @ownder: owner of new dog
 *
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *namesoname;
	char *namesoowner;
	dog_t *nameso;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;
		namesoname = malloc(sizeof(dog_t));

		if (nameso == NULL)
		return (NULL);

		namesoname = malloc(sizeof(char) * name_len);
		
		if (namesoname == NULL)
		{
			free(nameso);
			return (NULL);
		}

		namesoowner = malloc(sizeof(char) * owner_len);

		if (namesoowner == NULL)
		{
			free(nameso);
			return (NULL);
		}

		namesoname = _strcpy(namesoname, name);
		namesoowner = _strcpy(namesoowner, owner);
		nameso->age = age;
	}

	return (nameso);
}

/**
 * _strcpy-  copy a string
 *
 * @dest:    where to put the copy
 * @src:     what to copy
 *
 * Return:   pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}

	dest[len] = '\0';

		return (dest);
}

/**
 * _strlen-  determine the length of a string
 *
 * @s:       the string to find the longness of
 *
 * Return:   the longness of the string
 *
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
