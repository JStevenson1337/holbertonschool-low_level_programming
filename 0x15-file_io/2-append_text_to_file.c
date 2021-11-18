#include "main.h"
/**
 * @brief append_text_to_file
 * @filename: file_name
 * @text_content: text
 * @return
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	len = strlen(text_content);
	for (i = 0; i < len; i++)
	{
		write(fd, &text_content[i], 1);
	}
	return (1);
}
