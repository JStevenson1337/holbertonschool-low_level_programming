#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies arguments
 * @argc: arguments
 * @argv: array
 *
 * Return: EXIT
 *
 */

int main(int argc, char **argv)
{
	int num1;
	int num2;

	if (argc - 1 <= 1)
	{
		printf("Error\n");
		return  (1);
	}

	num1 = atoi(argv[argc - 2]);
	num2 = atoi(argv[argc - 1]);
	printf("%d\n", num1 * num2);
	return (EXIT_SUCCESS);
}
