//заменить каждое
//  нечетное число на произведение нечетных цифр в его десятичной записи, если количество чётных чисел больше,
//  чётное число на произведение чётных цифр в его десятичной записи, если количество нечётных чисел больше или равно количеству чётных, 
//Формат входных данных
//  10 целых чисел через пробел
//Формат результата
//  10 целых чисел через пробел 
#include <stdio.h>

#define SIZE 10

int input_arr(int size, int arr[])
{
  int i = 0;
  int cnt = 0;
  char ch;

  while(i < size){
    cnt = scanf("%d%c", &arr[i], &ch);
    if (cnt == 2)
      i++;
    if(ch == '\n')
      break;  
  }    
  return i;
}

void print_arr(int size, int *arr)
{
  for(int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int cnt_odd(int size, int arr[])
{
  int cnt = 0;
  for(int i = 0; i < size; i++)
    if(arr[i] & 1)
      cnt++;

  return cnt;
}
int mul_odd_digit(int num)
{
  int digit, mul = 1;
  
  while(num){
    digit = num % 10;
    if(digit & 1)
      mul *= digit;
    num /= 10; 
  }
  return mul;
}
int mul_even_digit(int num)
{
  int digit, mul = 1;
  while(num){
    digit = num % 10;
    if(!(digit & 1))
      mul *= digit;
    num /= 10; 
  }  
  return mul;
}
void even_odd(int size, int arr[])
{
  int flag_odd, cnt_even;
  
  cnt_even = size - cnt_odd(size, arr);
 
  if(cnt_even > size / 2){  
    for(int i = 0; i < size; i++){
      if(arr[i] & 1)
        arr[i] = mul_odd_digit(arr[i]);
    }
  }else{
    for(int i = 0; i < size; i++){
      if(!(arr[i] & 1))
        arr[i] = mul_even_digit(arr[i]); 
    }
  }
}
int main(void)
{
  int arr[SIZE] = {0};
  input_arr(SIZE, arr);
  even_odd(SIZE, arr);
  print_arr(SIZE, arr);
  
  
  return 0;
}
