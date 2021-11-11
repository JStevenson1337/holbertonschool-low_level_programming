#include <stdlib.h>
#include <stdio.h>

struct node
{
	int value;
	struct node* next;

};
typedef struct node node_t;

void printlist(node_t *head)
{
	node_t *temp = head;

	while (temp != NULL)
	{
		printf("%d - ", temp->value);
		temp = temp->next;
	}
	printf("\n");
	
}

node_t *create_new_node(int value)
{
	node_t * result = malloc(sizeof(node_t));
	result->value = value;
	result = NULL;
	return (result);
}

int main()
{
	node_t *head = NULL;
	node_t *tmp;

	for (int i = 0; i < 25; i++)
	{
		tmp = create_new_node(i);
		tmp->next = head;
		head = tmp;
	}

	return (0);
}
