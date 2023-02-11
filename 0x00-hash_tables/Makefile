CC=gcc
CFLAGS=-Wall -pedantic -Werror -Wextra

sht: 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c hash_table.h
	@echo "compiling sht"
	$(CC) $(CFLAGS) 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c 

obj.o: 100-sorted_hash_table.c 100-main.c hash_table.h
	$(CC) $(CFLAGS) $^ 

%.o: %.c
	$*