// Ввести c клавиатуры массив из 5 элементов,
// найти среднее арифметическое всех элементов массива.
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
float average(int *arr, int len)
{
  int i;
  float sum = 0;
  for(i = 0; i < len; i++)
    sum += arr[i];
  if(i)
    return sum/i;
  return 0;
}
int main (void)
{
  int arr[BUF_SIZE] = {0};

  if (input_arr(arr, BUF_SIZE) > 0)
    printf("%.3f\n", average(arr, BUF_SIZE));
    
  return 0;
}
