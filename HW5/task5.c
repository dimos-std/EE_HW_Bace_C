#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, sum = 0;
  scanf("%u", &num);
  while(num != 0){
    sum += num%10;
    num /= 10;    
  }
  printf("%u\n", sum);
  
  return 0;
}
