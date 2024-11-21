// Написать рекурсивную функцию и используя ее решить задачу.
// Напечатать цифры введенного натурального числа 
// в порядке следования(слева направо) через пробел.
// void print_digits(int n)
#include <stdio.h>

void print_digits(int num)
{  
  if (num > 9)
    print_digits(num/10);
  printf("%d ", num%10);
}

int main(void)
{
  int num;
  scanf("%d", &num);
  print_digits(num);
  return 0;
}
