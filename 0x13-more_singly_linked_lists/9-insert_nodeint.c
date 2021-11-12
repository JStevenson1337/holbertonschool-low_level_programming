#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at given index, preserving list
 * @head: head of list
 * @idx: index to put node at
 * @n: integer data for new node
 *
 * Return: pointer to new node at specified index, NULL if not found
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);


}
