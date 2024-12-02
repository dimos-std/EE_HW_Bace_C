
// Вывести в порядке следования цифры, 
// входящие в десятичную запись натурального числа N.
// Формат входных данных
//   Одно натуральное число N
// Формат результата
//   Цифры через пробел

#include <stdio.h>

#define BUF_SIZE 10
#define END '\n'

void print_arr(int *arr, int len)
{
  for(int i = 0; i < len; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
int get_num(int *arr, int len)
{
  int i = 0;
  while((arr[i] = getchar()) != END && i < len)
    arr[i++] -='0';
  
  return i;
}

int main (void)
{
  int arr[BUF_SIZE] = {0};
  int num_digit;
  num_digit =get_num(arr, BUF_SIZE);

  print_arr(arr, num_digit);
  
  return 0;
}
