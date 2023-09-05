#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	nwrite = write(fd, text_content, _strlen(text_content));
	if (nwrite == -1 || nwrite != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

/**
 * _strlen - count the lenght of string
 * s: sting to be counted
 *
 * Return: lenght of string
*/
ssize_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len])
		len++;

	return (len);
}
