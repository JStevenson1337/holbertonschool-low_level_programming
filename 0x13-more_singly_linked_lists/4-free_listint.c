#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: head of list
 *
 * Return: always void
 */
void free_listint(listint_t *head)
{
	listint_t *temp, ftemp;
	temp = head;
	while (temp != NULL)
	{
		ftemp = *temp;
		free(temp);
		temp = ftemp.next;
	}
}

