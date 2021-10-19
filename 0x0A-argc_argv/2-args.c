#include <stdio.h>
#include <stdlib.h>
/**
 * main - function start
 * @argc: arguments
 * @argv: arguments array
 * Description: a program that prints all arguments rcved
 * Return: Exit
 *
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argv[i] != argv[argc])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (EXIT_SUCCESS);
}
