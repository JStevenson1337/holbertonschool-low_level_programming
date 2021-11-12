#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of list
 * @index: index of node
 *
 * Return: pointer to node or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
