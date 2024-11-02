#include <stdio.h>

int main(void)
{
  int a, b, c, res;
  
  scanf("%d%d%d", &a, &b, &c);
  res = a + b + c;
  printf("%d+%d+%d=%d\n", a, b, c, res);
  
  return 0;
}
