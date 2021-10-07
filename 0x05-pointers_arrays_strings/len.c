#include<stdio.h>
//Lentgth of a string
// same as strlen
//
int length(char *s)
{

	int count = 0;
	while (*(s + count) != '\0')
		count++;
	return count;
}


// Trim off trailling whitespaces
//
//
int main()
{
	char str[100];
	printf("Enter a string:");
	fgets(str, 100, stdin);
	printf("Length is %d\n", length(str));
}

