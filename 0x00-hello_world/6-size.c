#include<stdio.h>
/*
 *Write a C program that
 *prints the size of various types on
 *the computer it is compiled and run on.
 */

/**
 * main - returns the size of
 * the following datatypes
 * datatypes -> Sizeof
 *
 *
 * Return: sizeof
 *
 */
int main(void)
{
	char charType;
	int intType;
	long long int llongIntType;
	long int longIntType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llongIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
