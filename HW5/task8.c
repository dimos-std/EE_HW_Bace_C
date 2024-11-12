#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, find = 0;
  scanf("%u", &num);
  while(num != 0 && (find < 2)){
    if(num%10 == 9)
      find++;
    num /= 10;    
    
  }
  if(find == 1)
    printf("YES\n");
  else
    printf("NO\n");  
  
  return 0;
}
