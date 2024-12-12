// В последовательности записаны целые числа от M до N ( M меньше N, M больше или равно 1)в произвольном порядке, 
// но одно из чисел пропущено (остальные встречаются ровно по одному разу). N не превосходит 1000. 
// Последовательность заканчивается числом 0. Определить пропущенное число.
// Формат входных данных
//   Последовательность целых чисел от M до N. M, N не превосходит 1000.
// Формат результата
//   Одно целое число
#include <stdio.h>

#define BUF_SIZE 1001

int input_arr_zero_end(int size, int arr[])
{
  int i = 0;
  for(; i < size; i++){
    scanf("%d", arr + i);
    if(*(arr+i) == 0)
      break;
  }
  return i;
}
void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;  
}

void sort_array(int size, int *a)
{
  int i_min;
  for(int i = 0; i <size - 1; i++){
    i_min = i;
    for(int j = i + 1; j < size; j++)
      if(a[j] < a[i_min])
        i_min = j;
    if(i_min != i)
      swap(&a[i], &a[i_min]);
  }
}
int find_lost(int size, int *arr)
{  
  sort_array(size, arr);
  for(int i = 0; i < size - 1; i++){
    if(arr[i] + 1 != arr[i+1])
      return arr[i] + 1;
  }
  return 0;  
}

int main(void)
{
  int size, lost;
  int arr[BUF_SIZE];

  
  size = input_arr_zero_end(BUF_SIZE, arr);
  lost = find_lost(size, arr);
  printf("%d\n", lost);
 
  return 0;
}
