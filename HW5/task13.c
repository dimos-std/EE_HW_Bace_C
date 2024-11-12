//количество четный(включая ноль) и нечетных цифр
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, even, odd;
  
  even = odd = 0;
  scanf("%u", &num);
  do{
    if(num & 1 == 1)
      odd++;
    else
      even++;
    num /=10;
  }while(num);

  printf("%d %d\n",even, odd);

  return 0;
}
