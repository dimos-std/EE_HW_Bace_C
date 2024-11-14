//факториал
#include <stdio.h>
int factorial(int num)
{
  int res=1;
  for(int i =1; i <= num; i++)
    res *= i;
  return res;
}

int main (void)
{
  int num;
  scanf("%u", &num);

  printf("%d\n", factorial(num));
  
  return 0;
}