#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, curDigit, nextDigit;
  
  scanf("%u", &num);
  curDigit = num % 10;
  num /= 10;
  while(num != 0){
    nextDigit = num % 10;
    if(curDigit == nextDigit){
      printf("YES\n");
      break;
    }
    curDigit = nextDigit;
    num /= 10;
  }
  if(!num)
    printf("NO\n");

  return 0;
}
