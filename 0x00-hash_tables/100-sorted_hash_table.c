#include"hash_table.h"
/**
 * shash_table_create - Create a hash table
 *
 * @size: Size of the array
 * Return: Pointer to the hash table or NULL on fail
 */

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *table;

    if (!size)
        return (NULL);
    if ((table = malloc(sizeof(shash_table_t))) == NULL)
        return (NULL);
    if ((table -> array = malloc(sizeof(shash_table_t) * size)) == NULL)
        return (NULL);
    table -> shead = NULL;
    table -> stail = NULL;
    return (table);
}
// int shash_table_set(shash_table_t *ht, const char *key, const char *value);
// The key/value pair should be inserted in the sorted list at the
// right place
// Note that here we do not want to do exactly like PHP: we want
// to create a sorted linked list, by key (sorted on ASCII value),
// that we can print by traversing it. See example.
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    size_t ptr1, ptr2, ptr3;
    int i = 0;

    shash_table_t *table = malloc(sizeof(shash_table_t)); /* allocate table and set pointer to the beginning of the table */
    ptr1 = (size_t)table[ptr2];
    shash_node_t *array = malloc(sizeof(shash_node_t[ptr2]));
    ptr3 =  




}
// int shash_table_set(shash_table_t *ht, const char *key, const char *value)
// {
// 	//TODO: To be Completed
// 	__asm__("nop");
// }
// char *shash_table_get(const shash_table_t *ht, const char *key)
// {
// 	//TODO: To be Completed
// 	__asm__("nop");
// }
// void shash_table_print_rev(const shash_table_t *ht)
// {
// 	//TODO: To be Completed
// 	__asm__("nop");
// }
// void shash_table_delete(shash_table_t *ht)
// {
// 	//TODO: To be Completed
// 	__asm__("nop");
// }



// TODO: Document Print Function
void shash_table_print(const shash_table_t *ht)
{
    size_t *curr, **array, *curr_head;
    int i, *j;

    if (!ht)
        return;

        *curr = (size_t)ht -> shead;

    while (curr)
    {
        printf("'%s': '%s'\n", curr -> key, curr -> value);

        curr = curr -> snext;
    }
}

int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);

    return (EXIT_SUCCESS);
}
