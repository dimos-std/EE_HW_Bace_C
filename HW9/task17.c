// функция возвращает сумму элементов главной диоганали
// Формат входных данных
//   25 целых чисел через пробел.
// Формат результата
//   Одно целое число.

#include <stdio.h>

#define MATRIX_SZ 5

void scan_matrix(int size, int *ptr)
{
  for(int i = 0; i < size * size; i++)
    scanf("%d", ptr + i);
}
int matrix_imprint(int size, int *ptr)
{
  int sum = 0;

  for(int i = 0; i < size; i++)
    sum += *(ptr + i + i * size);
  
  return sum;
}
int main(void)
{
  int arr[MATRIX_SZ][MATRIX_SZ] = {0};
  int *ptr = &arr[0][0];
  scan_matrix(MATRIX_SZ, ptr);
  printf("%d\n", matrix_imprint(MATRIX_SZ, ptr));
  return 0;  
}
