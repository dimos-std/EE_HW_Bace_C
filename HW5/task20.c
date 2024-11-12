#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, div, isPrime = 1;
  scanf("%u", &num);
  if(num < 2)
    isPrime = 0;
  for (uint32_t i = 2; i < num && isPrime; i++){
    if(num % i == 0)
      isPrime = 0;
  }
  if(isPrime)
    printf("YES\n");
  else
    printf("NO\n");



  return 0;
}