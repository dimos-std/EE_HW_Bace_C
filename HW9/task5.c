// Написать только одну функцию, которая находит максимальный элемент в массиве.
// Всю программу загружать не надо.
// Прототип функции: int find_max_array(int size, int a[])
// Формат входных данных
//   Массив состоящий из целых чисел. Первый аргумент, размер массива, 
//   второй аргумент адрес нулевого элемента.
// Формат результата
//   Одно целое число
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

int find_max_array(int size, int a[])
{
  int max = *a;
  for(int i = 1; i < size; i++)
    if(max < *(a + i))
      max = *(a + i);
    return max;
}

// int main(void)
// {
//   int max, size;
//   int arr[BUF_SIZE];
  
//   size = input_arr(BUF_SIZE, arr);
//   max = find_max_array(size, arr);
//   printf("%d\n", max);
 
//   return 0;
// }
