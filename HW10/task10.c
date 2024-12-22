// В файле input.txt дана строка слов, разделенных пробелами.
// Найти самое длинное слово и вывести его в файл output.txt.
// Случай, когда самых длинных слов может быть несколько, не обрабатывать.
// Формат входных данных
//   Строка из английских букв и пробелов. Не более 1000 символов.
// Формат результата
//   Одно слово из английских букв.

#include <stdio.h>
#include <locale.h>
#include <string.h>


#define SIZE  1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"


int main(void)
{
  FILE *f_in, *f_out;
  char str[SIZE + 1];
  char max_str[SIZE + 1];
  int max_len = 0;
  int len;
  
  setlocale(LC_ALL, "RUS");
  
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
    if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    fclose(f_in);
    printf("Ошибка доступа к файлу OUTPUT\n");
    return 1;
  }

  while(fscanf(f_in, "%s", str) != EOF)
    fprintf(f_out, "%s\n",str);

  fclose(f_in);
  fclose(f_out);

  return 0;
}
