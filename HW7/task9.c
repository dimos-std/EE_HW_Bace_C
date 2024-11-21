// Дано натуральное число N. Вычислите сумму его цифр.
// Необходимо составить рекурсивную функцию.
// int sum_digits(int n)
#include <stdio.h>
int sum_digits(int n)
{
  
   if (n > 0)
    return n%10 + sum_digits(n/10);

  return 0;
}

int main(void)
{
  int num;
  scanf("%d", &num);
  printf("%d\n", sum_digits(num));
  return 0;
}
