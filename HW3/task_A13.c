#include <stdio.h>

int main(void)
{
  int a, res;
  
  scanf("%d", &a);
  res = (a%10) * ((a/10)%10) * ((a/100)%10);
  printf("%d\n", res);
  
  return 0;

}