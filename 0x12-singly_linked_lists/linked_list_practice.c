#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

// struct Node *first = NULL;

int main()
{
	/* Creat Pointer */
	struct Node *one = NULL;
	struct Node *two = NULL;
	struct Node *three = NULL;

	/* Allocate Memeory */
	one = (struct Node*)malloc(sizeof(struct Node));
	two = (struct Node*)malloc(sizeof(struct Node));
	three = (struct Node*)malloc(sizeof(struct Node));

	/* Asign Data */
	one -> data = 15;
	two -> data = 22;
	three -> data = 19;

	/* Create Links */
	one -> next = two;
	two -> next = three;
	three -> next = NULL;

	printf("%d\n", one -> data);
	printf("%p\n", one -> next);
	printf("%d\n", two -> data);
	printf("%p\n", two -> next);
	printf("%d\n", three -> data);
	printf("%p\n", three -> next);


	return (0);
}
