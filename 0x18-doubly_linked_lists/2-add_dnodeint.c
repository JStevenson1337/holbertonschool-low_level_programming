#include "lists.h"
/**
 * add_dnodeint - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));	/* create new node */

	if (new_node == NULL)	/* if malloc fails */
		return (NULL);	/* return NULL */

	new_node->n = n;	/* assign the value to the new node */
	new_node->next = *head;	/* assign the next node to the head */
	new_node->prev = NULL;	/* assign the prev node to NULL */

	if (*head != NULL)	/* if the list is not empty */
		(*head)->prev = new_node;	/* assign the prev node to the head */

	*head = new_node;	/* assign the new node to the head */
	return (new_node);	/* return the address of the new node */
}
