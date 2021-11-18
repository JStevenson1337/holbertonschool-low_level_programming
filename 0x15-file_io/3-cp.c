#include "main.h"
/**
 * Description: copies the content of a file to another file
 * 
 * 
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	char buffer[1024];
	/*
	 * char BUFFER_SIZE = atoi(argv[3]);
	 */
	int n;
	if (argc != 3)
	{
		printf("Usage: %s <source file> <destination file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd2 == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	while ((n = read(fd1, buffer, 1024)) > 0)
	{
		write(fd2, buffer, 1024);
	}
	if (n == -1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
	close(fd1);
	close(fd2);
	exit(EXIT_SUCCESS);

	return (0);

}

