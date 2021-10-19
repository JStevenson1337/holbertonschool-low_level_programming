#include <stdio.h>
#include <stdlib.h>
/**
 * main - function start
 * @argc: arguments
 * @argv: array of arguments
 *	Description: adds positive numbers.
 * Return: EXIT
 *
 */

int main(int argc, char **argv)
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	sum = 0;
	while (argv[i] != argv[argc])
	{
		if  (atoi(argv[i]) == '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += _atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
