// модуль числа
#include <stdio.h>
#include <inttypes.h>

uint32_t my_abs(int32_t num)
{
  return (num < 0 ? (uint32_t)(~num)+1 : ((uint32_t)num));
}

int main(void)
{
  int32_t num;
  
  scanf("%d", &num);
  
  printf("%u\n", my_abs(num));
  return 0;
}