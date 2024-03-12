#include "main.h"
/**
 * append_text_to_file - function that appends to a file
 *
 *@filename: name of the file to create
 *@text_content: string to write to the file
 *
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i]; i++)
	;

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);

}
