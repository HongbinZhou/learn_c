#include <stdio.h>

char * f()
{
  char x[512];
  sprintf(x, "hello, world!\n");
  return x+6;
}

int main()
{
  /* not crash! print (null) */
  printf("char is: %s", f());
  return 0;
}
