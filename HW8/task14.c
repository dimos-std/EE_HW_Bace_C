// Считать массив из 10 элементов и выделить в другой массив все числа,
// которые встречаются более одного раза. 
// В результирующем массиве эти числа не должны повторяться.
// Формат входных данных
//   10 целых чисел через пробел
// Формат результата
//   Целые числа через пробел, которые встречаются более одного раза 
//   в исходном массиве.
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

int select_repeat(int *src, int *dst, int len)
{
  int is_find, cnt = 0;
  
  
  for(int i = 0; i < len; i++){
    for(int j = i + 1; j < len; j++){
      if(src[i] == src[j]){
        for(int k = 0; k < cnt; k++){
          if(dst[k] == src[i]){
            is_find = 0;
            break;
          }
          else {
            is_find = 1;
          }
        }
        if(is_find){
            dst[cnt] = src[i];
            cnt++;
        }
      }
    }
  }
  return cnt;
} 

int main (void)
{
  int src[BUF_SIZE] = {0};
  int dst[BUF_SIZE/2] = {0};
  int cnt;
  input_arr(src, BUF_SIZE);
  cnt = select_repeat(src, dst, BUF_SIZE);
  print_arr(dst, cnt);

  return 0;
}
