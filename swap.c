#include <stdio.h>

/* #define SWAP(a, b) a^=b; b^=a; a^=b; */
/* improved to: */
#define SWAP(a, b) do {a^=b; b^=a; a^=b;} while (0)

int main()
{
  int a = 1;
  int b = 2;
  printf("Before swap, a: %d, b: %d\n", a, b);
  SWAP(a, b);
  printf("After swap, a: %d, b: %d\n", a, b);

  return 0;

}
