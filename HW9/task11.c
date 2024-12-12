//функция выводит в порядке возрастания номера двух элементов массива из 30 элементов int, сумма которых минимальна. 
//Формат входных данных
//  Последовательность из 30 целых чисел через пробел
//Формат результата
//  Два целых числа через пробел 

 #include <stdio.h>

#define BUF_SIZE 30

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

void find_2_min(int size, int *arr)
{
  int i_min1, i_min2, tmp;
   if(arr[0] < arr[1]){
    i_min1 = 0;
    i_min2 = 1;    
  }else{
    i_min1 = 1;
    i_min2 = 0;
  }
  for(int i = 2; i < size; i++){
    if(arr[i] < arr[i_min1]){
      i_min2 = i_min1;
      i_min1 = i;
    }else if(arr[i] < arr[i_min2])
      i_min2 = i;
  }
  if(i_min2 < i_min1){
    tmp = i_min1;
    i_min1 = i_min2;
    i_min2 = tmp;
  }
  printf("%d %d", i_min1, i_min2);
}

int main(void)
{
  int arr[BUF_SIZE] = {0};
  int size;
  
  size = input_arr(BUF_SIZE, arr);
  find_2_min(size, arr);
    
  return 0;  
}
