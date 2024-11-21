// Дана последовательность целых чисел через пробел, завершающаяся числом 0.
// Выведите все нечетные числа из этой последовательности, сохраняя их порядок.
// Составить рекурсивную функцию.

#include <stdio.h>
void recur_odd(void)
{
  int num;
  scanf("%d", &num);
  if(num){
    if (num & 1)
      printf("%d ", num);
    recur_odd();
  }
}

int main(void)
{
  recur_odd();
  return 0;
}
