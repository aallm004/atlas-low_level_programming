/**
 * new_dog - function that creates a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @ownder: owner of new dog
 *
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nameso;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;
		nameso = malloc(sizeof(dog_t));

		if(dog_t == NULL)
			return (NULL);

		nameso->name = malloc(sizeof(char) * name_len);
		if (nameso->owner == NULL)
		{
			free(nameso->name);
			free(nameso);
			return (NULL);
		}

		nameso->name = _strcpy(nameso->, name);
		nameso->owner = _strcpy(nameso->, owner)
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
	int position = 0;
	bool exit = 0;

	while (!exit)
	{
		dest[position] = src[position];
		if (src[position] == 0)
			exit = true;
		position++;
	}

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
	int pos = 0;

	while (s[pos] != 0)
		pos++;

	return (pos);
}
