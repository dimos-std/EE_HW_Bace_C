// В файле input.txt в одной строке фамилию, имя и отчество.
// Сформировать файл приветствие output.txt, где останутся имя и фамилия
// Формат входных данных
// Строка состоящая из английских букв и пробелов не более 100 символов. 
// Формат: Фамилия Имя Отчество
// Формат результата
// Строка состоящая из английских букв и пробелов
#include <stdio.h>
#include <locale.h>
#include <string.h>


#define SIZE  100
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"
#define HELLO "Hello,"

int main(void)
{
  FILE *f_in, *f_out;
  char str[3][SIZE];
  int i = 0;
  
  setlocale(LC_ALL, "RUS");
  
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }

  while(fscanf(f_in, "%s", str[i]) != EOF && i < 3)
    i++;

  if(i != 3){
    printf("Неверное содержимое файла\n");
    fclose(f_in);
    return 2;
  }
  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    printf("Ошибка доступа к файлу OUTPUT\n");
    fclose(f_in);
    return 3;
  }
  fprintf(f_out, "%s %s %s!\n", HELLO, str[1], str[0]);

  fclose(f_in);  
  fclose(f_out);

  return 0;
}
