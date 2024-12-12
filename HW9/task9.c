// // Функция void swap_negmax_last(int size, int a[])
// //поменять местами максимальный отрицательный и последний элемент массива




#include <stdio.h>

#define BUF_SIZE 1000

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
void print_arr (int size, int *arr)
{
  for(int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}


void swap_negmax_last(int size, int a[])
{

  int tmp, negmax = 1<<31;
  int i_negmax;
  int find = 0;

  for(int i = 0; i < size; i++){
    if(a[i] < 0 && a[i] >= negmax){
      i_negmax = i;
      negmax = a[i];
      find = 1;
    }
  }

  if(find){
    tmp = a[i_negmax];
    a[i_negmax] = a[size - 1];
    a[size - 1] = tmp;
  }
}



int main(void)
{
  int arr[BUF_SIZE] = {0};
  int size;
  
  size = input_arr(BUF_SIZE, arr);
  swap_negmax_last(size, arr);
  print_arr(size, arr);
  
  return 0;  
}
