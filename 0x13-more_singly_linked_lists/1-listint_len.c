#include "lists.h"
/**
 * listint_len - Print the number of elements in a list
 * @h: Head Pointer
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	int i = 0;

	while (tmp != NULL)
	{
		i += 1;
		tmp = tmp->next;
	}
	return (i);

}
