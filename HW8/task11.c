// Считать массив из 10 элементов и отсортировать его по последней цифре.
// Формат входных данных
//   10 целых чисел через пробел
// Формат результата
//   Этот же массив отсортированный по последней цифре

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
void bubble_sort_last_digit(int *arr, int len)
{
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len - i - 1; j++)
      if(arr[j] % 10 > arr[j + 1] % 10)
        swap(arr, j, j + 1);
  }
}

int main()
{
  int arr[BUF_SIZE];
  input_arr(arr, BUF_SIZE);
  bubble_sort_last_digit(arr, BUF_SIZE);
  print_arr(arr, BUF_SIZE);
}