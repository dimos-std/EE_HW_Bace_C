// Считать массив из 10 элементов и 
// отсортировать первую половину по возрастанию, а вторую – по убыванию.
// Формат входных данных
//   10 целых чисел через пробел
// Формат результата
//   Исходный массив. Первая часть отсортирована по возрастанию,
//   вторая половина по убыванию.

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
void bubble_sort(int *arr, int len)
{
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len - i - 1; j++)
      if(arr[j] > arr[j + 1])
        swap(arr, j, j + 1);
  }
}
void bubble_sort_decreas(int *arr, int len)
{
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len - i - 1; j++)
      if(arr[j] < arr[j + 1])
        swap(arr, j, j + 1);
  }
}

int main()
{
  int arr[BUF_SIZE];
  input_arr(arr, BUF_SIZE);
  bubble_sort(arr, BUF_SIZE/2);
  bubble_sort_decreas(&arr[BUF_SIZE/2], BUF_SIZE/2);
  print_arr(arr, BUF_SIZE);
}