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
	FILE *fptr;

	fptr = fopen(filename, "r");

	if (fptr == NULL)
	{
		return (0);
		exit(1);
	}
	
	if (filename == NULL)
	{
		return (0);
	}

	if (fptr != NULL)
	{
		char c;
		while ((c = fgetc(fptr)) != EOF)
	
		fclose(fptr);
	}
	return (0);
}
