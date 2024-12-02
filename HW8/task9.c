// Считать массив из 10 элементов и 
// выполнить циклический сдвиг ВПРАВО на 1.
// Формат входных данных
//   10 целых чисел через пробел
// Формат результата
//   10 целых чисел через пробел сдвинутых вправо на 1 элемент циклическ
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

void cycle_shift_rigth(int *arr, int len, int shift)
{
  int tmp;
  for(int i = 0; i < shift % len; i++){
    tmp = arr[len - 1];
    for(int i = len - 1; i > 0; i--){
      arr[i] = arr[i - 1];
    }
    arr[0] = tmp;
  } 
}

int main (void)
{
  int arr[BUF_SIZE] = {0};

  if(input_arr(arr, BUF_SIZE) > 0){
    cycle_shift_rigth(arr, BUF_SIZE, 1);
    print_arr(arr, BUF_SIZE);
  }
    
  return 0;
}
