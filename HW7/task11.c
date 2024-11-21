//Дано натуральное число N. Посчитать количество «1» в двоичной записи числа. Составить рекурсивную функцию.
#include <stdio.h>
int number_sign_bits(int num)
{
  int cnt = 0;
  
  if(num & 1)
    cnt++;
  if(num)
    return cnt + number_sign_bits(num >> 1);
  return 0;
}
int main(void)
{
  int num;
  scanf("%d", &num);
  printf("%d\n", number_sign_bits(num));
  return 0;
}


