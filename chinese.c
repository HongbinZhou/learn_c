#include <stdio.h>
#include <assert.h>

int main() {
  unsigned char str[10] = "今天";      /* in oct: \344\273\212\345\244\251  */
  const unsigned char ref[10] = {0344, 0273, 0212, 0345, 0244, 0251}; /* leading 0 for octal numbers in C */
  int i;
  printf("str: %s\n", str);
  for(i=0; i<10; i++) {
    printf("str[%d]: %o\n", i, str[i]);
    assert(str[i] == ref[i]);
  }
  return 0;
}
