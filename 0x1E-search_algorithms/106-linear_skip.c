#include "search_algos.h"
/**
 * linear_skip - linear_skip search algorithm
 * @list: singly linked lists to search
 * @value: value to search for
 * Return: the index where value is located else NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    if (!list)
        return (NULL);
    
    while (list)
    {
        if (list->n == value)
            return (list);
        list = list->next;
    }
    return (NULL);
}
