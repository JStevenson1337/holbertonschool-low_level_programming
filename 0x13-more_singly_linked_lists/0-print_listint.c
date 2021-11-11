#include "lists.h"
/**
 * print_listint - Lists nodes
 * @h: head pointer
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			printf("%d\n", tmp->n);
		}
		else
		{
			printf("%d\n", tmp->n);
		}
		tmp = tmp->next;
		i++;
	}
	return (i);
}
