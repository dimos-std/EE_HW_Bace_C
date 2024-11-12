//цифры по порядку
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, curDigit, nextDigit;
  
  scanf("%u", &num);
  curDigit = num % 10;
  while(num){
    num /= 10;
    nextDigit = num % 10;
    if(curDigit <= nextDigit){
      printf("NO\n");
      break;
    }
    curDigit = nextDigit;
  }
  if(!num)
    printf("YES\n");

  return 0;
}
