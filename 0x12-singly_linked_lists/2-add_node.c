#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include "_strlen.c"



/**
 * add_node - adds a node to a linked list
 * @head: double pointer to a linked list
 * @str: string pointer
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	length = _strlen(new_str);

	new_node->str = new_str;
	new_node->len = length;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

