#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char s[] = "hi!";
  int s_length = strlen(s);

  char *t = malloc(s_length + 1);

  for (int i = 0; i < s_length; i++)
  {
    t[i] = s[i];
  }

  t[0] = toupper(t[0]);

  printf("s: %s\n", s);
  printf("t: %s\n", t);

  return 0;
}
