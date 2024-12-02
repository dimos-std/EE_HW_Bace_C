// Сумма положительных элементов
// Считать массив из 10 элементов и посчитать 
// сумму положительных элементов массива.
// Формат входных данных
//   10 целых чисел через пробел
// Формат результата
//   Одно целое число - сумма положительных элементов массива

#include <stdio.h>

#define BUF_SIZE 10

int input_arr(int *arr, int len)
{
  int i;
  for (i = 0; i < len; i++){
    if (!(scanf("%d", &arr[i])))
      return -1;
  }
  return i;
}

int sum_positive(int *arr, int len)
{
  int sum = 0;
  for( int i = 0; i < len; i++)
    if(arr[i] > 0) 
      sum += arr[i];
  return sum;
}

int main (void)
{
  int arr[BUF_SIZE] = {0};

  if (input_arr(arr, BUF_SIZE) > 0)
    printf("%d\n", sum_positive(arr, BUF_SIZE));

  return 0;
}
