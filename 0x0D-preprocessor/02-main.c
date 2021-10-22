#include <stdio.h>
/**
 * main - Function start
 * @argc:  # of variable
 * @argv: variable
 * Return: Name of self
 * Description: Printe own name
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", *argv);
	return (0);
}
