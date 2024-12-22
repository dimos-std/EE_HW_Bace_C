// Считать из input.txt строку. 
// Записать в файл output.txt номера символов, совпадающих с последним символом строки.
// Формат входных данных
//  Строка не более 1000 символов
// Формат результата
//  Целые числа через пробел - номера символа, который совпадает с последним символом строки.
#include <stdio.h>
#include <string.h>

#define SIZE  101
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

int f_get_str(FILE *f, int str_len, char* str)
{
  int i = 0;
  
  while((str[i] = getc(f)) != EOF && str[i] != '\n' && i < str_len -1)
    i++;
  str[i] = '\0';
  
  return i;
}

int main(void)
{
  FILE *f;
  char str[SIZE];
  int read_ch;

  if((f = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
  read_ch = f_get_str(f, SIZE, str);
  fclose(f);
  f = fopen(F_OUTPUT, "w");
  for(int i = 0; i < read_ch - 1; i++){
    if(str[i] == str[read_ch - 1])
      fprintf(f, "%d ", i);
  }
    

  fclose(f);

  return 0;
}