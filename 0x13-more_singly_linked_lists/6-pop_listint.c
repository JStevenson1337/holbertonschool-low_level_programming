#include "lists.h"
/**
 * pop_listint - Deletes a list element
 * @head: double pointer to head
 *
 * Return: number of elements deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (-1);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
