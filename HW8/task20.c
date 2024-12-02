
// Переставить цифры в числе так, что бы получилось максимальное число.
// Формат входных данных
//   Одно целое не отрицательное число
// Формат результата
//   Целое не отрицательное число

#include <stdio.h>

#define BUF_SIZE 10
#define END '\n'

void print_arr_together(int *arr, int len)
{
  for(int i = 0; i < len; i++)
    printf("%d", arr[i]);
  printf("\n");
}
int get_num(int *arr, int len)
{
  int i = 0;
  while((arr[i] = getchar()) != END && i < len)
    arr[i++] -='0';
  
  return i;
}
void swap(int *arr, int i, int j)
{
  int tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
}
void bubble_sort_decreas(int *arr, int len)
{
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len - i - 1; j++)
      if(arr[j] < arr[j + 1])
        swap(arr, j, j + 1);
  }
}

int main (void)
{
  int arr[BUF_SIZE] = {0};
  int num_digit;
  num_digit =get_num(arr, BUF_SIZE);
  bubble_sort_decreas(arr, num_digit);
  print_arr_together(arr, num_digit);
  
  return 0;
}
