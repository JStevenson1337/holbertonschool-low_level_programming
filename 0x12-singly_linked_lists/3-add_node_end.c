#include "lists.h"
#include "_strlen.c"
#include<stdio.h>
#include<string.h>
/**
 * add_node_end - add a new head node at the tail of the list_t list
 * @head: pointer to the current head
 * @str: String to copy into new head
 *
 * Return: address of new element, or NULL if it failed
 *
 */


list_t *add_node_end(list_t **head, const char *str)
{
	char *cpystr;
	list_t *new_node, *prev_node;
	int length = 0;

	new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

	cpystr = strdup(str);
	if (cpystr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	length = _strlen(cpystr);
	new_node->str = cpystr;
	new_node->len = length;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		prev_node = *head;
		while (prev_node->next != NULL)
			prev_node = prev_node->next;
		prev_node->next = new_node;
	}
	return (*head);
}
