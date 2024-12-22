// Разобрать на отдельные слова предложение и файла input.txt .
// Вывести каждое слово на отдельной строке в файл output.txt.
// Формат входных данных
// Одна строка из английских букв и пробелов не более 1000 символов.
// Формат результата
// Каждое слово на отдельной строке
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
  
  
  setlocale(LC_ALL, "RUS");
  
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    printf("Ошибка доступа к файлу OUTPUT\n");
    return 2;
  }      
  while(fscanf(f_in, "%s", str) != EOF)
    fprintf(f_out, "%s\n", str);

  fclose(f_in);  
  fclose(f_out);

  return 0;
}
