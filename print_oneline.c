#include <stdio.h>

int main()
{
  int i;
  int f;

  for (i=0; i<100; i++)
  {

    printf("\rloop: %d", i);
    sleep(1);
    fflush(stdout);

  }
}
