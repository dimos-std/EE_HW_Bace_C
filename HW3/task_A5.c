#include <stdio.h>

int main(int argc, char **argv)
{
  int a, b, c;
  float res;
  
  scanf("%d%d%d", &a, &b, &c);
  res = (float)(a + b + c)/3;
  printf("%.2f\n", res);
  
  return 0;

}