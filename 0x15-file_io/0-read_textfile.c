#include "main.h"

/**
 * read_textfile - read text file and write its content
 * @filename: name of the file to read
 * @letters: number of letters to be printed
 * Return: number of bytes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char buffer[1024 * 8];
	ssize_t bytes;

	if (!filename || !letters)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(file);
	return (bytes);
}
