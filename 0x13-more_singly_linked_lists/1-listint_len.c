#include "lists.h"
/**
 * listint_len - Print the number of elements in a list
 * @h: Head Pointer
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
