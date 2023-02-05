# 0x00. C - Hash tables

## Resources

**Read or watch**:

-   <a href="/rltoken/Vh5CgBZHiPwjdqvWkkiFHA" target="_blank"
    title="What is a HashTable Data Structure - Introduction to Hash Tables , Part 0">What
    is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a>
-   <a href="/rltoken/cGZcVdxJjpI6qIraale0Kw" target="_blank"
    title="Hash function">Hash function</a>
-   <a href="/rltoken/fvFoYGcNhOTn6cGxh_8rww" target="_blank"
    title="Hash table">Hash table</a>

## Learning Objectives

At the end of this project, you are expected to be able to
<a href="/rltoken/Kee8NERqbQ36_YQYkDiczA" target="_blank"
title="explain to anyone">explain to anyone</a>, **without the help of
Google**:

### General

-   What is a hash function
-   What makes a good hash function
-   What is a hash table, how do they work and how to use them
-   What is a collision and what are the main ways of dealing with
    collisions in the context of a hash table
-   What are the advantages and drawbacks of using hash tables
-   What are the most common use cases of hash tables

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with `gcc 4.8.4` using
    the flags `-Wall` `-Werror` `-Wextra` `and -pedantic`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is
    mandatory
-   Your code should use the `Betty` style. It will be checked using
    <a href="https://github.com/hs-hq/Betty/blob/master/betty-style.pl"
    target="_blank" title="betty-style.pl">betty-style.pl</a> and
    <a href="https://github.com/hs-hq/Betty/blob/master/betty-doc.pl"
    target="_blank" title="betty-doc.pl">betty-doc.pl</a>
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are allowed to use the C standard library
-   The prototypes of all your functions should be included in your
    header file called `hash_tables.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded

## More Info

### Tests

We strongly encourage you to work all together on a set of tests

### Python Dictionaries

Python dictionaries are implemented using hash tables. When you will be
done with this project, you will be able to better understand the power
and simplicity of Python dictionaries. So much is actually happening
when you type `d = {'a': 1, 'b': 2}`, but everything looks so simple for
the user. Python doesn’t use the exact same implementation than the one
you will work on today though. If you are curious on how it works under
the hood, here is a good blog post about
<a href="/rltoken/5HROZXuE6kL0oiVqtuuIzw" target="_blank"
title="how dictionaries are implemented in Python 2.7">how dictionaries
are implemented in Python 2.7</a> (not mandatory).

Note that all dictionaries are not implemented using hash tables and
there is a difference between a dictionary and a hash table.
<a href="/rltoken/8A3OwFHWCbzv-AWi_sW8Gg" target="_blank"
title="Read more here">Read more here</a> (not mandatory).

## Tasks


In <a href="/rltoken/2TWQEInfADrbnFaPsNfVfg" target="_blank"
title="PHP">PHP</a>, hash tables are **ordered**. Wait… WAT? How is this
even possible?

<img
src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230205%2Feu-west-3%2Fs3%2Faws4_request&amp;X-Amz-Date=20230205T123823Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=e680482ab2aaf967b6d7bce4e8bf3c9d6b0d5e595e8c3e120dc350a2117371a3"
style="" loading="lazy" />  

**Before you continue**, please take a moment to think about it: how you
would implement it if you were asked to during an interview or a job.
What data structures would you use? How would it work?

For this task, please:

-   Read <a href="/rltoken/Pc4Moa0m-uV5EmfUPYu_Fw" target="_blank"
    title="PHP Internals Book: HashTable">PHP Internals Book: HashTable</a>
-   Use the same hash function
-   Use these data structures:

<!-- -->

    /**
     * struct shash_node_s - Node of a sorted hash table
     *
     * @key: The key, string
     * The key is unique in the HashTable
     * @value: The value corresponding to a key
     * @next: A pointer to the next node of the List
     * @sprev: A pointer to the previous element of the sorted linked list
     * @snext: A pointer to the next element of the sorted linked list
     */
    typedef struct shash_node_s
    {
         char *key;
         char *value;
         struct shash_node_s *next;
         struct shash_node_s *sprev;
         struct shash_node_s *snext;
    } shash_node_t;

    /**
     * struct shash_table_s - Sorted hash table data structure
     *
     * @size: The size of the array
     * @array: An array of size @size
     * Each cell of this array is a pointer to the first node of a linked list,
     * because we want our HashTable to use a Chaining collision handling
     * @shead: A pointer to the first element of the sorted linked list
     * @stail: A pointer to the last element of the sorted linked list
     */
    typedef struct shash_table_s
    {
         unsigned long int size;
         shash_node_t **array;
         shash_node_t *shead;
         shash_node_t *stail;
    } shash_table_t;

Rewrite the previous functions using these data structures:

-   `shash_table_t *shash_table_create(unsigned long int size);`
-   `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
    -   The key/value pair should be inserted in the sorted list at the
        right place
    -   Note that here we do not want to do exactly like `PHP`: we want
        to create a sorted linked list, by key (sorted on ASCII value),
        that we can print by traversing it. See example.
-   `char *shash_table_get(const shash_table_t *ht, const char *key);`
-   `void shash_table_print(const shash_table_t *ht);`
    -   Should print the hash table using the sorted linked list
-   `void shash_table_print_rev(const shash_table_t *ht);`
    -   Should print the hash tables key/value pairs in reverse order
        using the sorted linked list
-   `void shash_table_delete(shash_table_t *ht);`
-   You are allowed to have more than 5 functions in your file

<!-- -->

    julien@ubuntu:~/0x00. Hash tables$ cat 100-main.c 
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #include "hash_tables.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always EXIT_SUCCESS.
     */
    int main(void)
    {
        shash_table_t *ht;

        ht = shash_table_create(1024);
        shash_table_set(ht, "y", "0");
        shash_table_print(ht);
        shash_table_set(ht, "j", "1");
        shash_table_print(ht);
        shash_table_set(ht, "c", "2");
        shash_table_print(ht);
        shash_table_set(ht, "b", "3");
        shash_table_print(ht);
        shash_table_set(ht, "z", "4");
        shash_table_print(ht);
        shash_table_set(ht, "n", "5");
        shash_table_print(ht);
        shash_table_set(ht, "a", "6");
        shash_table_print(ht);
        shash_table_set(ht, "m", "7");
        shash_table_print(ht);
        shash_table_print_rev(ht);
            shash_table_delete(ht);
        return (EXIT_SUCCESS);
    }
    julien@ubuntu:~/0x00. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht 
    julien@ubuntu:~/0x00. Hash tables$ ./sht 
    {'y': '0'}
    {'j': '1', 'y': '0'}
    {'c': '2', 'j': '1', 'y': '0'}
    {'b': '3', 'c': '2', 'j': '1', 'y': '0'}
    {'b': '3', 'c': '2', 'j': '1', 'y': '0', 'z': '4'}
    {'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
    {'a': '6', 'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
    {'a': '6', 'b': '3', 'c': '2', 'j': '1', 'm': '7', 'n': '5', 'y': '0', 'z': '4'}
    {'z': '4', 'y': '0', 'n': '5', 'm': '7', 'j': '1', 'c': '2', 'b': '3', 'a': '6'}
    julien@ubuntu:~/0x00. Hash tables$ 

  
<img
src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/253/php.png"
style="width:50.0%" />

**Repo:**

-   GitHub repository: `holbertonschool-low_level_programming`
-   Directory: `0x00-hash_tables`
-   File: `100-sorted_hash_table.c`
