#include "main.h"
/*
 * create_file - Create a file
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int len;
	int res;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		perror("Error");
		return (1);
	}
	len = strlen(text_content);
	i = 0;
	while (i < len)
	{
		res = write(fd, text_content + i, 1);
		if (res == -1)
		{
			perror("Error");
			return (1);
		}
		i++;
	}
	return (0);
}
