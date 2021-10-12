#include<stdio.h>
/* prints the alphabet in lower case */
/**
 *main- prints the alphabet in lower case
 *
 *Return: 0
 */
int main(void)
{
	char _a = 'a';

	for (_a = 'a'; _a <= 'z'; _a++)
	{
		putchar(_a);
	}
	putchar('\n');
	return (0);

}