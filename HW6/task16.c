//число простое?
#include <stdio.h>

int is_prime(int n)
{
  int is_prime = 1;

  if(n < 2 || !(n &1) && (n != 2))
    is_prime = 0;
  else {
    for (int i = 3; i < n && is_prime; i +=2)
      if(n % i == 0)
        is_prime = 0;
  }
  return is_prime;
}

int main(void)
{
  int  num;
  
  scanf("%d", &num);
  if(is_prime(num))
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
