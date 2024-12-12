//функция  int count_bigger_abs(int n, int a[])
// возвращает количество элементов превосходящих по модулю максимальный элемент в массиве, 
//состоящем из положительных и отрицательных чисел.
//Формат входных данных
//  Функция получает размер массива и массив целых чисел 
//Формат результата
//  Функция возвращает целое число равное количеству элементов превосходящих по модулю максимальный элемент. 

// #include <stdio.h>

// #define BUF_SIZE 1000

// int input_arr(int size, int arr[])
// {
//   int i = 0;
//   int cnt = 0;
//   char ch;

//   while(i < size){
//     cnt = scanf("%d%c", &arr[i], &ch);
//     if (cnt == 2)
//       i++;
//     if(ch == '\n')
//       break;  
//   }    
//   return i;
// }
unsigned int my_abs(int num)
{
  return (num < 0 ? (unsigned int)(~num)+1 : ((unsigned int)num));
}

int count_bigger_abs(int n, int a[])
{
  int i_max = 0;
  int cnt = 0;
  //find max
  for(int i = 1; i < n; i++)
    if(a[i_max] < a[i])
      i_max = i;
  //count bigger abs
  for(int i = 0; i < n; i++)
    if(my_abs(a[i]) > a[i_max])
      cnt++;   
  return cnt;
}

// int main(void)
// {
//   int arr[BUF_SIZE] = {0};
//   int size;
  
//   size = input_arr(BUF_SIZE, arr);
//   printf("%d\n", count_bigger_abs(size, arr)); 
    
//   return 0;  
// }
