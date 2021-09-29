#include<stdio.h>
/*Write a program that prints the alphabet in lowercase, followed by a new line.*/
/*
 * Print all the letters except q and e
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	All your code should be in the main function
	You can only use putchar twice in your code
	*/


 /**
 *main- prints the alphabet
 *
 *Return: 0
 */
int main(void)
{

	char _a;

	for (_a = 'a'; _a <= 'z'; _a++)
	{
		if (_a != 'q' && _a != 'e')
		putchar(_a);
	}
	putchar('\n');
	return(0);

	}
