#include "lists.h"
/**
 * add_nodeint_end - add a node ti the end
 * @head: pointer to head
 * @n: next
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_head = NULL, *new_node = NULL;

	temp_head = *head;
	if (temp_head)
	{
		while (temp_head->next)
		{
			temp_head = temp_head->next;
		}
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp_head)
	{
		temp_head->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
