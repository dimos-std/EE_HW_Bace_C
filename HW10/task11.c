// В файле input.txt  определить, сколько слов заканчиваются на букву 'а'. 
// Ответ записать в файл output.txt.
// Формат входных данных
//   Строка из английских букв и пробелов не более 1000 символов.
// Формат результата
//   Одно целое число

#include <stdio.h>
#include <locale.h>
#include <string.h>


#define SIZE  1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

int cnt_word_end_symbol(FILE *f_in, char symbol)
{
  int i = 0;
  int cnt = 0;
  char str[SIZE];

  while(fscanf(f_in, "%s", str) != EOF)
    if(str[strlen(str) - 1] == symbol)
    cnt++;

  return cnt;
}

int main(void)
{
  FILE *f_in, *f_out;
  int cnt;
  
  setlocale(LC_ALL, "RUS");
  
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
  cnt = cnt_word_end_symbol(f_in, 'a');
  fclose(f_in);

  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    printf("Ошибка доступа к файлу OUTPUT\n");
    return 2;
  }      
  fprintf(f_out, "%d", cnt);
  fclose(f_out);

  return 0;
}