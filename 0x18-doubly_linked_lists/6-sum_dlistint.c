#include "lists.h"
/**
 * sum_dlistint - Add all the data of a linked list
 * @head: head
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

