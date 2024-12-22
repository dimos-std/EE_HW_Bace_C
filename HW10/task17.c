//В файле input.txt записаны символы. Необходимо разработать функцию, которая меняет местами пары соседних символов не обращая внимание на символы пробел.
//Если количество символов нечетно (пробелы не считаем), то последний символ не меняем. Результат записать в файл output.txt.  
// Формат входных данных
//  Строка из английских букв, пробелов и знаков препинания. Не более 1000 символов. 
//Формат результата
//  Строка из английских букв, пробелов и знаков препинания. 
#include <stdio.h>
#include <string.h>

#define SIZE  1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"
#define SPACE ' '

void swap(char *a, char *b)
{
  char tmp = *a;
  *a = *b;
  *b = tmp;  
}
void swap_neighbors(char *src)
{
  char *tmp;
  int i = 0;
  while(*src){
    if(*src != SPACE){
      tmp = src;
      ++src;
      while(*src == SPACE)
        ++src;
      if(*src)
        swap(tmp, src);
    }
    ++src;
  } 
}


int main(void)
{
  FILE *f_in, *f_out;
  char str[SIZE + 1];
    
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_OUTPUT);
    fclose(f_in);
    return 2;
  }

  fscanf(f_in, "%[^\n]", str);
  swap_neighbors(str);
  fprintf(f_out, "%s", str);
   
  fclose(f_in);
  fclose(f_out);

  return 0;
}