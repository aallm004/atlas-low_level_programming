#include "main.h"
#define BUF_SIZE 1024


int all_in_the_name_OF_betty(void);
/**
 *main - copies the file
 *
 *@argv: count the argument
 *@argc: vector de arg
 *
 *Return: returns an integer
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from, Bread, Bwritten;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Use: cp file_from file_to\n");
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
		if (fd_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Unable to read file %s\n", argv[1]);
			return (98);
		}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", argv[2]);
			close(fd_from);
			return (99);
		}

		while ((Bread = read(fd_from, buffer, BUF_SIZE)) > 0)
		{
			Bwritten = write(fd_to, buffer, Bread);
				if (Bwritten == Bread)
				{
					dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", argv[2]);
					close(fd_from);
					close(fd_to);
					return (99);
				}
		}

	if (Bread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		return (99);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}

	return (0);
}
