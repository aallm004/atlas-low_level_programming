#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function that reads a txtfile and prints to POSIX stdout
 *
 *@filename: name of file
 *@letters: size letters
 *
 * Return: numbers of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd, fd, nb;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[rd] = '\0';

	nb = write(STDOUT_FILENO, buffer, rd);
	if (nb == -1 || nb != rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (rd);
}


