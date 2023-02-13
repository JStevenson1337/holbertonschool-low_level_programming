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
    unsigned long int i;

    if (!size)
    {
        free(table);
        return (NULL);
    }
    if ((table = malloc(sizeof(shash_table_t))) == NULL)
    {
        free(table);
        return (NULL);
    }
    if ((table -> array = malloc(sizeof(shash_table_t) * size)) == NULL)
    {
        free(table);
        return (NULL);
    }

    table -> shead = NULL;
    table -> stail = NULL;
    for (i = 0; i < size; i++)
    {
        table -> array[i] = NULL;
    }
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
  size_t *current, *new_node, *after, index;
    int i = 0;
    int a_key, new_value;

    a_key = atoi(key);
 
    if (key == NULL || ht == NULL || value == NULL)
      return (0);

    memcpy(value, *new_value, sizeof(value));

    index = subindex(key, ht -> size);
    while (current -> after != NULL)
      {
        current  = ht -> shead;
        after = shead -> snext;

        if (strcmp(current -> key, key) == 0)
          {
            free(current -> value);
            current -> value = new_value;
            return (1);
          }
      }
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node || !new_node -> key)
      {
        free(new_value);
        free(new_node);
        return(0);
      }
    new_node -> value = new_value;
    new_noode -> next = ht -> array[index];
    ht -> array[index] = new_node;

    if (ht->shead == NULL)
      {
        new_node -> sprev = NULL;
        new_node -> snext = NULL;
        ht -> shead = new_node;
        ht -> stail = new_node;
      }
    else if (strcmp(ht -> shead -> key, key) > 0)
      {
        new_node -> sprev = NULL;
        new_node -> snext = ht->shead;
        ht -> shead->sprev = new_node;
        ht -> shead = new_node;
      }
    else
      {
        for(current = ht -> shead;
            current -> snext != NULL && strcmp(current -> snext -> key, key) < 0;
            current = current -> snext)
          ;
        new_node -> sprev = current;
        new_node -> snext = current -> snext;
        if (current -> snext == NULL)
          ht -> stail = new_node;
        else
          current -> snext -> sprev = new_node;
        current -> snext = new_node;
      }
    return (1);
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
// 	__asm__("nop")
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
