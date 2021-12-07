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
	dlistint_t *tmp = h;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}
	return (i);
}
