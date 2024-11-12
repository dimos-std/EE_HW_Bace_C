//повернуть число
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, newNum =0;
  
  scanf("%u", &num);
  while(num){
    newNum *= 10;
    newNum += num % 10;
    num /= 10;
  }
  printf("%d\n",newNum);

  return 0;
}
