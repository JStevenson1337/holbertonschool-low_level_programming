#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (index == 0)
		return (delete_dnodeint(head));
	temp = *head;
	for (i = 0; temp && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (!temp)
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (1);
}
