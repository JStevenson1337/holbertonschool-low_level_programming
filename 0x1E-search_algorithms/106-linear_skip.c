#include "search_algos.h"
/**
 * linear_skip - searches for a value in a sorted
 * @list: pointer to the head of the skip list
 * @value: Value to search
 *
 * Return: pointer to the node containing the value or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i;
	skiplist_t *node_ptr, *node_temp;

	if (!list)
		return (NULL);

	node_ptr = list, node_temp = list;

	while (node_ptr && node_ptr->next && (node_ptr->n) < value)
	{
		node_temp = node_ptr;
		if (node_ptr->express)
		{
			node_ptr = node_ptr->express;
			printf("Value checked at index [%lu] = [%d]\n",
					node_ptr->index, node_ptr->n);
		}
		else
			while (node_ptr->next)
				node_ptr = node_ptr->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			node_temp->index, node_ptr->index);
	for (i = node_temp->index;
			i <= (node_ptr->index) && (node_temp->n <= value);
			i++, node_temp = node_temp->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, node_temp->n);
		if (node_temp && (node_temp->n) == value)
			return (node_temp);
	}
	if (node_temp)
		printf("Value checked at index [%lu] = [%d]\n", i, node_temp->n);
	return (NULL);
}
