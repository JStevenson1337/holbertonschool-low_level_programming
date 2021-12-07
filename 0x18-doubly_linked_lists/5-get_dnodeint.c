#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node of the list
 * @index: index of the node to return
 * Return: the nth node of the list, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
