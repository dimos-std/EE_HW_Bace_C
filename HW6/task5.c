//среднее
#include <stdio.h>
#include <inttypes.h>

uint32_t sum_num(uint32_t num)
{
  return (uint32_t)num * (num+1)/2;
}

int main (void)
{
  uint32_t num;
  scanf("%u", &num);
  printf("%u\n", sum_num(num));
  
  return 0;
}