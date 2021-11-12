#include "lists.h"
/**
 * print_listint - Lists nodes
 * @h: head pointer
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *temp;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		node_count++;
	}
	return (node_count);
}
