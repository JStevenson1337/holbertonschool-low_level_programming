#include "main.h"
int _memcmp(const void *s1, const void *s2, int len);
int string_length(char s[]);
/**
 * _strstr - start
 * @haystack: search space
 * @needle: search criteria
 * Description:
 * Return:
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0; *(haystack + i) != '\0'; i++)
		if (*needle, (haystack + i))
			return (haystack + i);
	return (0);
}
