//функция void change_max_min(int size, int a[]) меняет минимальный и максимальный элемент местами
//Формат входных данных
//  Функция принимает на вход размер массива и массив чисел типа int
//Формат результата
//  Функция не возвращает значения, измененный массив сохраняется на месте исходного. 

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
// void print_arr(int size, int *arr)
// {
//   for(int i = 0; i < size; i++)
//     printf("%d ", arr[i]);
//   printf("\n");
// }


void change_max_min(int size, int a[])
{
  int i_min, i_max, tmp;
   if(a[0] < a[1]){
    i_min = 0;
    i_max = 1;    
  }else{
    i_min = 1;
    i_max = 0;
  }
  for(int i = 2; i < size; i++){
    if(a[i] < a[i_min])
      i_min = i;
    else if(a[i] > a[i_max])
      i_max = i;
  }
  tmp = a[i_min];
  a[i_min] = a[i_max];
  a[i_max] = tmp;
}

// int main(void)
// {
//   int arr[BUF_SIZE] = {0};
//   int size;
  
//   size = input_arr(BUF_SIZE, arr);
//   change_max_min(size, arr);
//   print_arr(size, arr);
    
//   return 0;  
// }
