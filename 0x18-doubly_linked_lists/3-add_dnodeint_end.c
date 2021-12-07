#include "lists.h"
/**
 * add_dnoteint_end - add node to the end of a list
 * @head: head of node
 * @n: new node
 * Return: n
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	new_node->prev = (*head)->prev;
	(*head)->prev = new_node;
	return (new_node);
}
