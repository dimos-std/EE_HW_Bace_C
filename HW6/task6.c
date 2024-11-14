//количество зерен
#include <stdio.h>
#include <inttypes.h>

uint64_t grains(uint32_t num)
{
  return ((uint64_t)1 <<(num-1));
}

int main (void)
{
  uint32_t num;
  scanf("%u", &num);

  printf("%lu\n", grains(num));
  
  return 0;
}