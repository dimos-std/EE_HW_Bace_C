#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, sum = 0;
  scanf("%u", &num);
  while(num != 0){

    sum += num % 10;
    num /= 10;
    
  }
  if (sum == 10)
    printf("YES\n");
  else
    printf("NO\n");
 
  return 0;
}