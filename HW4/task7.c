#include <stdio.h>
#include <locale.h>

int main(void)
{
  int a, b, c, d, e, max;

  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  max = a > b ? (a > c ? a : c) : (b > c ? b :c);
  max = max > d ? (max > e ? max : e) : (d > e ? d : e);
 
  printf("%d\n", max);
  
  return 0;
}