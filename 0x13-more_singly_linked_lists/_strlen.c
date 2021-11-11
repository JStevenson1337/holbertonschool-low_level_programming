/**
 * _strlen = Function Start
 * Description: Returns the length of a string
 * @str: value passed in to be evaluated
 * Return: len length of string
 */

int _strlen(char *str)
{
	int i = 0;

	do {
		++str;
		++i;
	} while (*(str + i) != '\0');
	return (i);
}
