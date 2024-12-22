// В файле input.txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы. 
// Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив. 
// Вывести массив по возрастанию в файл output.txt.
// Формат входных данных
//   Строка из английских букв, цифр и знаков препинания
// Формат результата
//   Последовательность целых чисел отсортированная по возрастанию
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 500
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

int compare(const void *a, const void *b)
{
  return (*(int*)a - *(int*)b);
}
int f_get_numbes(FILE *f, int size, int arr[])
{
  int i = 0;
  int number = 0;
  int find = 0;
  char tmp;
  while((tmp = fgetc(f)) != EOF && i < size){
    if(isdigit(tmp)){
      number *= 10;
      number += tmp - '0';
      find = 1;
    } else if(find){
      arr[i++] = number;
      number = 0;
      find = 0;
    }
  }  
  return i;
}
void fprint_arr_int(FILE *f, int size, int arr[])
{
  for(int i = 0; i < size; i++)
    fprintf(f, "%d ", arr[i]);
  fprintf(f, "\n");

}


int main(void)
{
  FILE *f_in, *f_out;
  int arr[SIZE + 1];
  int len;

  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_OUTPUT);
    fclose(f_in);
    return 2;
  }
  len = f_get_numbes(f_in, SIZE, arr);
  qsort(arr, len, sizeof(int), compare);
  fprint_arr_int(f_out, len, arr);
   
  fclose(f_in);
  fclose(f_out);

  return 0;
}