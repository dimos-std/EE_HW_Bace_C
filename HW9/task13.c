//функция  int count_between(int from, int to, int size, int a[])
//возвращает количество элементов на заданном отрезке [from, to] для массива
//Формат входных данных
//  Функция принимает значения концов отрезка from и to, размер массива, массив целых чисел. 
//Формат результата
//  Функция возвращает целое число - количество числе в интервале [from, to] 

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
int count_between(int from, int to, int size, int a[])
{
  int cnt = 0;
  for(int i = 0; i < size; i++)
    if(a[i] >= from && a[i] <= to)
      cnt++;
  return cnt;
}

// int main(void)
// {
//   int arr[BUF_SIZE] = {0};
//   int size, from, to;

//   scanf("%d%d", &from, &to);
//   size = input_arr(BUF_SIZE, arr);
//   printf("%d\n", count_between(from, to, size, arr)); 
    
//   return 0;  
// }
