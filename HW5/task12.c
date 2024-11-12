//наименьшая и наибольшая цифра
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, min, max, tmp;
  
  scanf("%u", &num);
  min = max = num%10;
  num /= 10;
  while(num){
    tmp = num % 10;
    if(tmp > max) 
      max = tmp;
    else if(tmp < min)
      min = tmp;
    num /= 10;
  }
  printf("%d %d\n",min, max);

  return 0;
}
