#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index of the node to delete
 * 
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}
