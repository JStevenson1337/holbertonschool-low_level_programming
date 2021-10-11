#include "main.h"
/**
 * cap_string - function start
 * @str: sting to be evaluated
 * Description: Capitalize first letter of each word
 * Return: mutated string
 */
char *cap_string(char *str) {

  int i = 0;

  for (i = 0; str[i] != '\0'; i++) {
    if (i == 0) {
      if ((str[i] >= 'a' && str[i] <= 'z'))
        str[i] = str[i] - 32;
      continue;
    }

    if (str[i] == ' ') {
      ++i;
      if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 32;
        continue;
      }
    } else {
      if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
    }
  }
  return (str);
}
