#include "lists.h"
/**
 * print_dlistint - print number of nodes
 * @h: nodes
 * Return: Nuber of Nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);

}
