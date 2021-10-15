
/**
 * _strpbrk - function start
 * @s: begin string
 * @accept: comparison string
 * Description: function that searches string
 * Return: mutated string
 */
char *_strpbrk(char *s, char *accept)
{

	int i;

	do {
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;

	} while (*s != '\0');

	return (0);
}
