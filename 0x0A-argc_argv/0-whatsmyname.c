#include <stdio.h>
#include <stdlib.h>
/**
 * main - function start
 * @argc: arguments passed in
 * @argv: array of args
 * Description: program that prints its name, followed by a new line
 * Return: 0
 */


int main(int argc, char  *argv[])
{


	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
