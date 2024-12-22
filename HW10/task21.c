// Во входном файле input.txt записано некоторое количество символов * (камней). 
// Необходимо построить равносторонний треугольник используя все символы * и символ пробел, записать ответ в выходной файл output.txt.
// Между соседними символами * строго один пробел. Если треугольник невозможно составить,
// используя все камни, то необходимо записать единственное слово NO в файл output.txt.
// Формат входных данных
// Текстовый файл состоит из различных символов и символов *.
// Формат результата
// Равносторонний треугольник составленный из символов *, символов пробела и символов переноса строк или слово NO.
#include <stdio.h>
#include <string.h>
#include <math.h>

#define SYMBOL '*'
#define SPACE ' '
#define SIZE 1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

int count_symbol(FILE *f, char symbol)
{
  int i = 0;
  char tmp;
  while((tmp = fgetc(f)) != EOF)
    if(tmp == symbol)
      i++;
  return i;
}
int is_can_triangle(int num)
{
  double res;
  double fract;
  if(num > 2){
    res = (sqrt(1 + 8 * num) - 1)/2;
    fract = modf(res, &res);
    if(fract == 0)
      return (int)res;
  }
  return 0;
}

void print_triangle(FILE *f_in, FILE *f_out, char symbol)
{
  int cnt = count_symbol(f_in, symbol);
  int height;

  if(height = is_can_triangle(cnt)){
    for (int i = 0; i < height; i++){
      for (int j = 0; j < height - i - 1; j++)
        fprintf(f_out, "%c", SPACE);
      for (int k = 0; k < i + 1; k++)
        fprintf(f_out, "%c ", SYMBOL);
      fprintf(f_out, "\n");
    }
  }else
    fprintf(f_out,"NO\n");
}


int main(void)
{
  FILE *f_in, *f_out;

  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_OUTPUT);
    fclose(f_in);
    return 2;
  }
  print_triangle(f_in, f_out, SYMBOL);
   
  fclose(f_in);
  fclose(f_out);

  return 0;
}