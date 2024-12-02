// Считать массив из 10 элементов и найти в нем 
// максимальный и минимальный элементы и их номера.
// Формат входных данных
//   10 целых чисел через пробел
// Формат результата
//   4 целых числа через пробел: номер максимума, максимум,
//   номер минимума, минимум.

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

void max_min(int *arr, int len, int *result)
{
  result[1] = result[3] = arr[0]; // max и min
  result[0] = result[2] = 1;      //позиция max и min
  
  for(int i = 1; i < len; i++){
    if(result[1] < arr[i]){
      result[1] = arr[i];
      result[0] = i + 1;
    } else if(result[3] > arr[i]){
      result[3] = arr[i];
      result[2] = i + 1;
    }      
  }
}

int main (void)
{
  int arr[BUF_SIZE] = {0};
  int result[4] = {0};

  if (input_arr(arr, BUF_SIZE) > 0){
    max_min(arr, BUF_SIZE, result);
    print_arr(result, 4);
  }
  return 0;
}
