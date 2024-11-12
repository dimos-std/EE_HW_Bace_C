#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, i = 0;
  scanf("%u", &num);
  while(num != 0){
    num /= 10;
    i++;
  }
  if (i == 3)
    printf("YES\n");
  else
    printf("NO\n");
 
  return 0;
}