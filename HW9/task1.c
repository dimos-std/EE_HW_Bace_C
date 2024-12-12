// Сортировка по взрастанию
// Написать только одну функцию, которая сортирует массив по возрастанию. 
// Необходимо реализовать только одну функцию, всю программу составлять не надо.
// Строго согласно прототипу. Имя функции и все аргументы должны быть: 
// void sort_array(int size, int a[]).
// Всю программу загружать не надо, только одну эту функцию. 
// Можно просто закомментировать текст всей программы, кроме данной функции.
// Формат входных данных
//   Функция принимает на вход, первый аргумент - размер массива, второй аргумент - адрес нулевого элемента.
// Формат результата
//   Функция ничего не возвращает. Производит сортировку переданного ей массива по возрастанию.

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
// void print_arr (int size, int *arr)
// {
//   for(int i = 0; i < size; i++)
//     printf("%d ", arr[i]);
//   printf("\n");
// }


void sort_array(int size, int *a)
{
  int i_min;
  int tmp;
  for(int i = 0; i <size - 1; i++){
    i_min = i;
    for(int j = i + 1; j < size; j++)
      if(a[j] < a[i_min])
        i_min = j;
    if(i_min != i){
      tmp = a[i];
      a[i] = a[i_min];
      a[i_min] = tmp;
    }
  }
}

// int main(void)
// {
//   int arr[BUF_SIZE] = {0};
//   int size;
  
//   size = input_arr(BUF_SIZE, arr);
//   sort_array(size, arr);
//   print_arr(size, arr);
  
//   return 0;  
// }
