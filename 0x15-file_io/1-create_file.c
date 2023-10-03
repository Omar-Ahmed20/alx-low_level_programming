#include "main.h"
/**
 * _strlen - count number of characters of a string
 * @str: input string
 * Return:: lenght of the input string
 */
int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * create_file - createa new file and write content
 * @filename: name of the file
 * @text_content: content to write in the file
 * Return: 1 if success -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (len)
		written = write(fd, text_content, len);
	close(fd);
	return (written == len ? 1 : -1);
}
