#include "main.h"
/**
 * read_textfile - Read a file and outputs to SDTOUT
 * @filename: pointer to file
 * @letters: memory
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);
	write(STDOUT_FILENO, buffer, bytes_read);
	close(fd);
	free(buffer);
	return (bytes_read);
}




















