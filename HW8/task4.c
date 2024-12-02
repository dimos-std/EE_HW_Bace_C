// Считать массив из 10 элементов и найти в нем 
// два максимальных элемента и напечатать их сумму.
// Формат входных данных
//     10 целых чисел через пробел.
// Формат результата
//     Сумма двух максимальных элементов.

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

int sum_max(int *arr, int len)
{
  int max1, max2;
  
  if(arr[0] > arr[1]){
    max1 = arr[0];
    max2 = arr[1]; 
  } else {
    max1 = arr[1];
    max2 = arr[0];
  }
  for(int i = 2; i < len; i++){
    if(max1 < arr[i]){
      max2 = max1;
      max1 = arr[i];
    }
    else if(max2 < arr[i])
      max2 = arr[i];
  }

  return max1 + max2;
}

int main (void)
{
  int arr[BUF_SIZE] = {0};

  if (input_arr(arr, BUF_SIZE) > 0)
    printf("%d\n", sum_max(arr, BUF_SIZE));

  return 0;
}
