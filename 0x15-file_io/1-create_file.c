#include "main.h"
/**
 * create_file - Create a file
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 * Return: Success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int res;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	res = write(fd, text_content, strlen(text_content));
	if (res == -1)
	{
		return (-1);
	}

	return (1);
}
