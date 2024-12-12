// определить сумму максимальных элементов из каждой строки
// функцией определяющей максимальный элемент в строке из 10 элементов
// Формат входных данных
//   10 строк состоящих из 10 целых чисел через пробел.
// Формат результата
//   Одно целое число.

#include <stdio.h>

#define MATRIX_SZ 10

void scan_matrix(int size, int *ptr)
{
  for(int i = 0; i < size * size; i++)
    scanf("%d", ptr + i);
}
int find_max(int size, int a[])
{
  int i_max = 0;
  for(int i = 1 ; i < size ; i++)
    if(a[i] > a[i_max])
      i_max = i;
  return a[i_max];
}


int main(void)
{
  int arr[MATRIX_SZ][MATRIX_SZ] = {0};
  int *ptr = &arr[0][0];
  int sum = 0;
  scan_matrix(MATRIX_SZ, ptr);
  for(int i = 0; i < MATRIX_SZ; i++)
    sum += find_max(MATRIX_SZ, ptr + i * MATRIX_SZ);

  printf("%d\n", sum);
  return 0;  
}
