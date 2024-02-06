/**
 * _strstr - function that locates a substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, l1, l2;
	int count = 0;
	l1 = _strlen;
	l2 = _strlen;

	for (i = 0; i < l1 - l2 + 1; i++)
	{
		count++;
		i = i + l2 - 1;
	}
}
return (count);


/**
 * _strlen - returns the length of a string
 *
 * @s : int
 *
 * Return: the length of the string
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
