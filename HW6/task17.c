// счастливое число
#include <stdio.h>
int is_happy_number(int n)
{
  int mul = 1, sum = 0, tmp;

  while (n) {
    tmp = n%10;
    sum += tmp;
    mul *= tmp;
    n /=10;
  }
  return (mul == sum) ? 1 : 0;
}

int main(void)
{
  int num;
  
  scanf("%d", &num);
  
  if( is_happy_number(num))
    printf("YES\n");
  else 
    printf("NO\n");

  return 0;
}