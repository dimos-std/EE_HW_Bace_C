// Определить количество положительных элементов квадратной матрицы, 
// превышающих по величине среднее арифметическое всех элементов главной диагонали.
// Реализовать функцию среднее арифметическое главной диагонали.
//  5 строк по 5 целых чисел через пробел
// Формат результата
//   Одно целое число.

#include <stdio.h>

#define MATRIX_SZ 5

void scan_matrix(int size, int *ptr)
{
  for(int i = 0; i < size * size; i++)
    scanf("%d", ptr + i);
}
int average_matrix_diagonal(int size, int *ptr)
{
  int sum = 0;

  for(int i = 0; i < size; i++)
    sum += *(ptr + i + i * size);
  
  return sum / size;
}
int count_more_than(int num, int size, int *ptr)
{
  int cnt = 0;
  for (int i = 0; i < size * size; i ++)
    if(*(ptr + i) > 0 && *(ptr + i) > num)
      cnt++;
    return cnt;
}

int main(void)
{
  int arr[MATRIX_SZ][MATRIX_SZ] = {0};
  int *ptr = &arr[0][0];
  float average;
  
  scan_matrix(MATRIX_SZ, ptr);
  average = average_matrix_diagonal(MATRIX_SZ, ptr);
  printf("%d\n", count_more_than(average, MATRIX_SZ, ptr));

  return 0;  
}
