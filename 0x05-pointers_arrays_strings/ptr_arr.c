#include <stdio.h>
int main()
{
	int First_array[10] = {1, 2, 3, 4, 5,6 ,7, 8, 9, 10};
	int *ptr;
	ptr = First_array;
	for (int i = 0; i < 10; i++)
	{
		printf("Value of *ptr variable = %d\n", *ptr);
		printf("Value of ptr variable = %p\n", ptr);
	
}
}
