#include "main.h"
/**
 *	rev_string -
 *
 */
void rev_string(char *s) {

  int i, len;

  _length(s);
  while (len >= i) {

    s[len] = s[i];
    len--;
    i++;
  }
}

int _length(char *s) {
  int len;
  char *c = s;
  len = 0;

  do {
    len++;
    c++;
  } while (*c != '\0');

  return (len);
}