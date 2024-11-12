//НОД Евклида модифицированный
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num1, num2, tmp;
  scanf("%u%u", &num1, &num2);
  while(num2){
    tmp = num1 % num2;
    num1 = num2;
    num2 = tmp;
  }
  printf("%u\n",num1);
 
  return 0;
}