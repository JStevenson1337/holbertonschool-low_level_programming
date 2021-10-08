
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