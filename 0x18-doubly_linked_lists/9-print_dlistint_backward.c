#include "lists.h"
/**
 * print_dlistint_backward - prints a doubly linked list in reverse
 * @h: pointer to the head of the list
 *
 * Return: void
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t i = 0;

	while (h->prev)
	{
		printf("%d\n", h->prev->n);
		h = h->prev;
		i++;
	}
	printf("%d\n", h->n);
	return (i + 1);
}
