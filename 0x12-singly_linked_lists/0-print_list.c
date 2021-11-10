#include "lists.h"
/**
 * print_list - Counts the number of Elements
 * @h: Variable linked list
 *
 * Return: number of elements
 *
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (node_count);
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;

	}
	return (node_count);
}
