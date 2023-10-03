#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define NOREAD_ERROR "Error: Can't read from file %s\n"
#define NOWRITE_ERROR "Error: Can't write to %s\n"
#define NOCLOSE_ERROR "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH | S_IRGRP)

/**
 * main - copy content of file to another one
 * @argc: number of arguments to the program
 * @argv: list of all the arguments passed to the program
 * Return: 1 if success other number if fails
 */

int main(int argc, char **argv)
{
	int from_fd = 0, to_fd = 0;
	ssize_t bytes;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, NOREAD_ERROR, argv[1]), exit(98);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, NOWRITE_ERROR, argv[2]), exit(99);
	while ((bytes = read(from_fd, buffer, 1024)) > 0)
		if (write(to_fd, buffer, bytes) != bytes)
			dprintf(STDERR_FILENO, NOWRITE_ERROR, argv[2]), exit(99);
	if (bytes == -1)
		dprintf(STDERR_FILENO, NOREAD_ERROR, argv[1]), exit(98);
	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, NOCLOSE_ERROR, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, NOCLOSE_ERROR, from_fd), exit(100);
	return (EXIT_SUCCESS);
}
