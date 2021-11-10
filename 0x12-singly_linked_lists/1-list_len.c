#include "lists.h"
/**
 * list_len - Count the number of elements in nodes.
 * @h: - Linked list Variable
 * Return: number of elements.
 *
 * Description: Counts the number of elements.
 */
size_t list_len(const list_t *h)
{
	unsigned int numNodes = 0;

	while (h)
	{
		h = h->next;
		numNodes++;
	}
	return (numNodes);
}
