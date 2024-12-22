// В файле input.txt строка из меленьких и больших английских букв, знаков препинания и пробелов. 
// Требуется удалить из нее повторяющиеся символы и все пробелы. Результат записать в файл output.txt.
// Формат входных данных
//  Строка из меленьких и больших английских букв, знаков препинания и пробелов. Размер строки не более 1000 сивмолов.
// Формат результата
//  Строка из меленьких и больших английских букв.

#include <stdio.h>
#include <string.h>

#define SIZE  1000
#define SPACE ' '
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"



void remove_ocur(char str[])
{
  int head = 0;
  int cur = 0;
  int cnt_ascii[128] = {0};
  cnt_ascii[SPACE] = 1;

  while(str[cur]){
    if(cnt_ascii[str[cur]] == 0){
      cnt_ascii[str[cur]]++;
      str[head++] = str[cur++];
    }
    else
      cur++;
  }
  str[head] = '\0';
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
  remove_ocur(str);
  fprintf(f_out, "%s", str);
   
  fclose(f_in);
  fclose(f_out);

  return 0;
}