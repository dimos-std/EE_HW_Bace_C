// Написать функцию, которая сжимает серии массива, состоящего из единиц и нулей 
// по следующему принципу: например, массив [0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1]
//  преобразуется в [4,7,2,4] (т.к. начинается с нуля, то сразу записывается количество элементов первой серии); а массив [1,1,1,0,0,0,0,0,0,0] преобразуется в [0,3,7] (т.к. первая серия - это единицы, то первый элемент преобразованного массива 0).
// Необходимо реализовать только одну функцию, всю программу загружать не надо. 
// Прототип функции: int compression(int a[], int b[], int N)
// Формат входных данных
//   Функция принимает исходный массив a[] и сжимает в массив b[], N - число элементов в массиве a[].
// Формат результата
//   Функция возвращает число элементов сжатого массива b[]
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

int compression(int a[], int b[], int N)
{
  int i = 0;
  int j = 0;
  int digit = 0;
  int cur = *a;
  
  if(cur)
    b[j++] = 0;
  for(int i = 0; i < N; i++){
    if(cur == *(a + i))
      digit++;
    else{
      b[j++] = digit;
      digit = 1;
      cur = *(a + i);
    }
  }
  b[j++] = digit;
  
  return j;
}

// int main(void)
// {
//   int read, size;
//   int src[BUF_SIZE];
//   int dst[BUF_SIZE];
  
//   read = input_arr(BUF_SIZE, src);
//   size = compression(src, dst, read);
//   print_arr(size, dst);
 
//   return 0;
// }
