// Считать массив из 10 элементов и 
// выполнить инверсию отдельно для 1-ой и 2-ой половин массива.
// Необходимо изменить считанный массив и напечатать его одним циклом.
// Формат входных данных
//  10 целых элементов массива через пробел.
// Формат результата
//  10 целых элементов массива через пробел.

#include <stdio.h>

#define BUF_SIZE 10
#define NUM_ARR 2

int input_arr(int *arr, int len)
{
  int i;
  for (i = 0; i < len; i++){
    if (!(scanf("%d", &arr[i])))
      return -1;
  }
  return i;
}
void print_arr(int *arr, int len)
{
  for(int i = 0; i < len; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
void swap(int *arr, int i, int j)
{
  int tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
}
void revers(int *arr, int len)
{
  for(int i = 0; i < len/2; i++)
    swap(arr, i, len -1 -i);
}
int main(void)
{
  int arr[BUF_SIZE];
  input_arr(arr, BUF_SIZE);
  for(int i = 0; i < NUM_ARR; i++)
    revers(&arr[i * BUF_SIZE / NUM_ARR], BUF_SIZE / NUM_ARR);
  print_arr(arr, BUF_SIZE);
  return 0;
}
