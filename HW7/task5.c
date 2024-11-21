// Перевести натуральное число в двоичную систему счисления.
// Необходимо реализовать рекурсивную функцию.

#include <stdio.h>

int dec_to_bin(int num)
{  
  if (num > 0)
    return (num%2) + dec_to_bin(num/2)*10;
  return 0;
}

int main(void)
{
  int num;
  scanf("%d", &num);
  printf("%d\n",dec_to_bin(num));
  return 0;
}
