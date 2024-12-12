// Написать только одну логическую функцию, которая определяет, 
// верно ли, что среди элементов массива есть два одинаковых. 
// Если ответ «да», функция возвращает 1; если ответ «нет», то 0. 
// Строго согласно прототипу:
// int is_two_same(int size, int a[]);
// Формат входных данных
//   Массив из целых чисел
// Формат результата
//   Функция возвращает 1 или 0
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

int is_two_same(int size, int a[])
{
  int find = 0;
  
  for(int i = 0; i < size - 1 && !find; i++)
    for(int j = i + 1; j < size; j++)
      if (*(a + i) == *(a + j)){
        find = 1;
        break;
      }
  return find;
}

// int main(void)
// {
//   int find, size;
//   int arr[BUF_SIZE];
  
//   size = input_arr(BUF_SIZE, arr);
//   find = is_two_same(size, arr);
//   printf("%s\n", find ? "YES" : "NO");
 
//   return 0;
// }
