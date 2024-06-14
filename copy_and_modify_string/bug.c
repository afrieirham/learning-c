#include <stdio.h>
#include <ctype.h>

int main()
{
  char s[] = "hi!";
  char *t = s;

  t[0] = toupper(t[0]);

  printf("s: %s\n", s);
  printf("t: %s\n", t);

  return 0;
}
