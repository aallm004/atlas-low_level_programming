#include "main.h"

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
	int fd_de, fd_aa, b_rd, n_wr;
	char buffer[buffer_size];
	char *file_de *file_aa;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Use: cp file_de file_a\n");
		exit(97);
	}

	fd_de = argv[1];
	fd_aa = argv[2];

	fd_de = open(file_de, O_RDONLY);
	if (fd_de == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Unable to read from file %s\n", file_from);
		exit(98);
	}

	fd_aa = open(file_aa, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0664);
	if (fd_aa == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", file_aa);
		exit(99);
	}

	while ((b_rd = read(fd_de, buffer, buffer_size)) > 0)
	{
		n_wr = write(fd_aa, buffer, b_rd);
		if (n_wr == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Unable to write to %s\n", file_aa);
			exit(99);
		}
	}

	if (close(fd_de) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close fd %d\n", fd_de);
		exit(100);
	}
	if (close(fd_aa) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close fd %d\n", fd_aa);
		exit(100);
	}

	return (0);
}
