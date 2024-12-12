//функция  int sum_between_ab(int from, int to, int size, int a[]) 
//возвращает сумму элементов в заданном отрезке [from, to] для массива
//Формат входных данных
//  Функция принимает концы отрезка from и to, размер массива, массив целых чисел  
//Формат результата
//  Функция возвращает сумму элементов в интервале [from, to]

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
int sum_between_ab(int from, int to, int size, int a[]) 
{
  int tmp;
  int sum = 0;

  if(from > to){
    tmp = from;
    from = to;
    to =tmp;
  }
  for(int i = 0; i < size; i++)
    if(a[i] >= from && a[i] <= to)
      sum += a[i];

  return sum;

}

// int main(void)
// {
//   int arr[BUF_SIZE] = {0};
//   int size, from, to;


//   scanf("%d%d", &from, &to);
//   size = input_arr(BUF_SIZE, arr);
//   printf("%d\n", sum_between_ab(from, to, size, arr)); 
    
//   return 0;  
// }
