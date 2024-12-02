// Считать 10 чисел в диапазоне от -500 до 500 и
// разложить по двум массивам:в одни помещать только положительные, 
// во второй - только отрицательные. Числа, равные нулю, игнорировать. 
// Вывести на экран все элементы обоих массивов.
// Формат входных данных
//   10 целых чисел через пробел.
// Формат результата
//   Сперва положительные числа, потом отрицательыне числа, через пробел.
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

int sort_positive_negative(int *src, int *dst, int len)
{
  int cnt = 0;
  for(int i = 0; i < len; i++)
    if(src[i] > 0)
      dst[cnt++] = src[i];
  for(int i = 0; i < len; i++)
    if(src[i] < 0)
      dst[cnt++] = src[i];
  return cnt;
} 

int main (void)
{
  int src[BUF_SIZE] = {0};
  int dst[BUF_SIZE] = {0};
  int cnt;
  input_arr(src, BUF_SIZE);
  cnt = sort_positive_negative(src, dst, BUF_SIZE);
  print_arr(dst, cnt);

  return 0;
}


