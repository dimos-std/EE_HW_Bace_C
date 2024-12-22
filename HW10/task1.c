// из файла input.txt считать строку и вывести ее в файл output.txt три раза через запятую и в конце количество символов в ней.
// Формат входных данных
// Строка из английских букв и пробелов. Не более 100 символов. В конце могут быть незначащие переносы строк.
// Формат результата
// Исходная строка 3 раза подряд, через запятую пробел и количество символов в ней.
#include <stdio.h>
#include <string.h>

#define SIZE  101
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

int f_get_str(FILE *f, int str_len, char* str)
{
  int i = 0;
  
  while((str[i] = fgetc(f)) != EOF && str[i] != '\n' && i < str_len -1)
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
  for(int i = 0; i < 3; i++){
    if(i)
      fprintf(f, ", ");
    fprintf(f, "%s", str);
  }
    
  fprintf(f, " %d", read_ch);
  fclose(f);

  return 0;
}