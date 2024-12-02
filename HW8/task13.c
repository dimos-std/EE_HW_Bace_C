// Считать массив из 10 элементов и отобрать в другой массив все числа,
// у которых вторая с конца цифра (число десятков) – ноль.
// Формат входных данных
//   10 целых чисел через пробел.
// Формат результата
//   Целые числа через пробел, у котороых вторая с конца цифра - ноль
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

int select_with_zero(int *src, int *dst, int len)
{
  int i, j;
  i = j = 0;
  for(;i < len; i++)
    if((src[i]/10)%10 == 0){
      dst[j] = src[i];
      j++;
    }
  return j;
} 

int main (void)
{
  int src[BUF_SIZE] = {0};
  int dst[BUF_SIZE/2] = {0};
  int cnt;
  input_arr(src, BUF_SIZE);
  cnt = select_with_zero(src, dst, BUF_SIZE);
  print_arr(dst, cnt);

  return 0;
}
