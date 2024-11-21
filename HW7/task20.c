// Написать рекурсивную функцию возведения целого числа n в степень p.
// int recurs_power(int n, int p)
// Используя данную функцию, решить задачу.
#include <stdio.h>
int recurs_power(int n, int p)
{
  if(p > 0)
    return n * recurs_power(n, p - 1);
  return 1;
}



int main(void)
{
  int num, pow;
  scanf("%d%d", &num, &pow);
  printf("%d\n", recurs_power(num, pow));  
  return 0;
}
