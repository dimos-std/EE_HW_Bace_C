//сумма цифр четная
#include <stdio.h>

int is_sum_even(int num)
{
  int sum = 0;
  while(num != 0){
    sum += num % 10;
    num /= 10;
  }
  
  return !(sum & 1);
}

int main(void)
{
  int num;

  scanf("%d", &num);
  if (is_sum_even(num))
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}