#include "lists.h"
/**
 * add_nodeint_end - add a node ti the end
 * @head: pointer to head
 * @n: next
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t new = malloc(sizeof(listint_t));
	listint_t *last = *head;
	new->n = n;
	new->next = NULL;
