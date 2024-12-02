// Ввести c клавиатуры массив из 5 элементов, 
// найти минимальный из них.
#include <stdio.h>

#define BUF_SIZE 5

int input_arr(int *arr, int len)
{
  int i;
  for (i = 0; i < len; i++){
    if (!(scanf("%d", &arr[i])))
      return -1;
  }
  return i;
}

int min_in_arr(int *arr, int len)
{
  int min = arr[0];
  for (int i = 0; i < len; i++)
    if (min > arr[i])
      min = arr[i];
  return min;
}
int main (void)
{
  int arr[BUF_SIZE] = {0};

  if (input_arr(arr, BUF_SIZE) > 0)
    printf("%d\n", min_in_arr(arr, BUF_SIZE));
    
  return 0;
}
