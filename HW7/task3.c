//Дано целое не отрицательное число N.
// Выведите все его цифры по одной, в обратном порядке,
// разделяя их пробелами или новыми строками.
// Составить рекурсивную функцию.
#include <stdio.h>

void print_digit_rev(int num)
{
  printf("%d ", num%10);
  if (num > 9)
    print_digit_rev(num/10);
  
}

int main(void)
{
  int num;
  scanf("%d", &num);
  print_digit_rev(num);
  return 0;
}
