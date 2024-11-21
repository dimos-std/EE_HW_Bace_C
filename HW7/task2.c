//Составить рекурсивную функцию,
// которая определяет сумму всех чисел от 1 до N
#include <stdio.h>

int rec_sum(int num)
{
  if (num > 0)
    return num+rec_sum(num-1);
  else
    return 0;
}

int main(void)
{
  int num;
  scanf("%d", &num);
  printf("%d", rec_sum(num));  
  return 0;
}
