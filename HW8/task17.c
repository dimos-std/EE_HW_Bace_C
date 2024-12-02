
// Дан массив из 10 элементов. В массиве найти элементы, 
// которые в нем встречаются только один раз, и вывести их на экран.
// Формат входных данных
//   10 целых чисел через пробел
// Формат результата
//   Элементы которые встречаются только один раз через пр
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

int once(int *src, int * dst, int len)
{
  int is_find, cnt = 0;

  for(int i = 0; i < len; i++){
    is_find = 0;
    for(int j = 0; j < len; j++){
      if(src[j] == src[i]){
        is_find++;
      }
    }
    if(is_find == 1)
      dst[cnt++] = src[i];
  }
  return cnt;
} 

int main (void)
{
  int src[BUF_SIZE] = {0};
  int dst[BUF_SIZE] = {0};
  int cnt;
  input_arr(src, BUF_SIZE);
  cnt = once(src, dst, BUF_SIZE);
  print_arr(dst, cnt);

  return 0;
}
