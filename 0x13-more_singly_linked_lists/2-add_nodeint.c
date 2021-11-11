#include "lists.h"
/**
 * add_nodeint - Adds a new node
 * @n: next
 * @head: head pointer
 *
 * Return: - Address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{


	listint_t *new = malloc(sizeof(listint_t));

	new->n		= n;

	new->next	= (*head);

	(*head)		= new;
	if (new)
	{
		return (&*new);
	}
	else
	{
		return (NULL);
	}
}
