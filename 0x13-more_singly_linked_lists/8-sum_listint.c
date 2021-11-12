#include "lists.h"
/**
 * sum_listint - sums the data of a linked list
 * @head: head of list
 *
 * Return: integer sum of all values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
