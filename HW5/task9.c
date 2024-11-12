#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, isOdd = 0;
  scanf("%u", &num);
  while(num != 0 && !isOdd){
    if(num & 1 == 1)
      isOdd = 1;
    num /= 10;    
  }
  if(isOdd)
    printf("NO\n");
  else
    printf("YES\n");

  
  return 0;
}
