#include <stdio.h>
#include <stdlib.h>

struct Node
{
int data;
struct Node *next;
};

void push(struct Node** head_ref, int new_data)
{

	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data)
{

	if (prev_node == NULL)
	{
	printf("the given previous node cannot be NULL");
	return;
	}

	struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;
}
void append(struct Node** head_ref, int new_data)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *head_ref;
	new_node->data = new_data;

	new_node->next = NULL;

	if (*head_ref == NULL)
	{
	*head_ref = new_node;
	return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}
void printList(struct Node *node)
{
while (node != NULL)
{
	printf(" %d ", node->data);
	node = node->next;
}
}
int main()
{
struct Node* head = NULL;
append(&head, 6);
push(&head, 7);
push(&head, 1);
append(&head, 4);
insertAfter(head->next, 8);
printf("\n Created Linked list is: ");
printList(head);
return 0;
}


/*
https://pythontutor.com/c.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0Astruct%20Node%0A%7B%0Aint%20data%3B%0Astruct%20Node%20*next%3B%0A%7D%3B%0A%0Avoid%20push%28struct%20Node**%20head_ref,%20int%20new_data%29%0A%7B%0A%0A%20%20%20%20struct%20Node*%20new_node%20%3D%20%28struct%20Node*%29%20malloc%28sizeof%28struct%20Node%29%29%3B%0A%0A%20%20%20%20new_node-%3Edata%20%3D%20new_data%3B%0A%0A%20%20%20%20new_node-%3Enext%20%3D%20%28*head_ref%29%3B%0A%0A%20%20%20%20%28*head_ref%29%20%3D%20new_node%3B%0A%7D%0A%0Avoid%20insertAfter%28struct%20Node*%20prev_node,%20int%20new_data%29%0A%7B%0A%0A%20%20%20%20if%20%28prev_node%20%3D%3D%20NULL%29%0A%20%20%20%20%7B%0A%20%20%20%20printf%28%22the%20given%20previous%20node%20cannot%20be%20NULL%22%29%3B%0A%20%20%20%20return%3B%0A%20%20%20%20%7D%0A%0A%20%20%20%20struct%20Node*%20new_node%20%3D%28struct%20Node*%29%20malloc%28sizeof%28struct%20Node%29%29%3B%0A%0A%20%20%20%20new_node-%3Edata%20%3D%20new_data%3B%0A%0A%20%20%20%20new_node-%3Enext%20%3D%20prev_node-%3Enext%3B%0A%0A%20%20%20%20prev_node-%3Enext%20%3D%20new_node%3B%0A%7D%0Avoid%20append%28struct%20Node**%20head_ref,%20int%20new_data%29%0A%7B%0A%20%20%20%20struct%20Node*%20new_node%20%3D%20%28struct%20Node*%29%20malloc%28sizeof%28struct%20Node%29%29%3B%0A%20%20%20%20struct%20Node%20*last%20%3D%20*head_ref%3B%0A%20%20%20%20new_node-%3Edata%20%3D%20new_data%3B%0A%0A%20%20%20%20new_node-%3Enext%20%3D%20NULL%3B%0A%0A%20%20%20%20if%20%28*head_ref%20%3D%3D%20NULL%29%0A%20%20%20%20%7B%0A%20%20%20%20*head_ref%20%3D%20new_node%3B%0A%20%20%20%20return%3B%0A%20%20%20%20%7D%0A%20%20%20%20while%20%28last-%3Enext%20!%3D%20NULL%29%0A%20%20%20%20%20%20%20%20last%20%3D%20last-%3Enext%3B%0A%20%20%20%20last-%3Enext%20%3D%20new_node%3B%0A%20%20%20%20return%3B%0A%7D%0Avoid%20printList%28struct%20Node%20*node%29%0A%7B%0Awhile%20%28node%20!%3D%20NULL%29%0A%7B%0A%20%20%20%20printf%28%22%20%25d%20%22,%20node-%3Edata%29%3B%0A%20%20%20%20node%20%3D%20node-%3Enext%3B%0A%7D%0A%7D%0Aint%20main%28%29%0A%7B%0Astruct%20Node*%20head%20%3D%20NULL%3B%0Aappend%28%26head,%206%29%3B%0Apush%28%26head,%207%29%3B%0Apush%28%26head,%201%29%3B%0Aappend%28%26head,%204%29%3B%0AinsertAfter%28head-%3Enext,%208%29%3B%0Aprintf%28%22%5Cn%20Created%20Linked%20list%20is%3A%20%22%29%3B%0AprintList%28head%29%3B%0Areturn%200%3B%0A%7D&curInstr=73&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D
*/
