// Написать только одну функцию,которая ставит в начало массива все четные элементы,
// а в конец – все нечетные. Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.
// void sort_even_odd(int n, int a[])
// Формат входных данных
//   Функцийя принмате на вход целые числа
// Формат результата
//   Отсортированный исходный массив
//  TODO: попробывать через циклический сдвиг
// #include <stdio.h>

// #define BUF_SIZE 1000

// int input_arr(int size, int *arr)
// {
//   int i = 0;
//   int cnt = 0;
//   char ch;

//   do{
//     cnt = scanf("%d%c", &arr[i], &ch);
//     if (cnt == 2)
//       i++;
//     if(ch == '\n')
//       break;  
//   }while(i < size);
  
//   return i;
// }
// void print_arr (int size, int *arr)
// {
//   for(int i = 0; i < size; i++)
//     printf("%d ", arr[i]);
//   printf("\n");
// }



void sort_even_odd(int size, int a[])
{
  int no_swap;
  int tmp;
  for (int i = 0; i < size; i++){
    no_swap = 1;
    for (int j = 0; j < size - 1 - i; j++){
        if (a[j] & 1 && !(a[j + 1] & 1)){
            no_swap = 0;
            tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
        }
    }
    if(no_swap)
      break;
  }
}


// int main(void)
// {
//   int arr[BUF_SIZE] = {0};
//   int size;
  
//   size = input_arr(BUF_SIZE, arr);
//   sort_even_odd(size, arr);
//   print_arr(size, arr);
  
//   return 0;  
// }
