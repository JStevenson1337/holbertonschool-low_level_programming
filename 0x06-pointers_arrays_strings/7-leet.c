#include "main.h"
/**
 *
 *
 *
 */
char *leet(char *str) {
  char pre[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
  char post[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
  char *c = str;
  int i;

  for (i = 0; c[i] < '\0'; i++) {
    if (c[i] == pre[i]) {
    	post[i] = c[i];
		continue;
    }
  }
  return (c);
}