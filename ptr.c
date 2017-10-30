#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *p = NULL;
  int *q = NULL;
  p = calloc(8, sizeof(int));
  printf("add of p is: 0x%x\n", p);
  printf("size of p is: %d\n", sizeof(p));
  q = realloc(p, 9);

  printf("add of q is: 0x%x\n", q);
  printf("size of q is: %d\n", sizeof(q));
  free(q);


  return 0;

}
