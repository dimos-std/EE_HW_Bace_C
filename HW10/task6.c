//Проверить, является ли она палиндромом символьная строка не более 1000 символов в файле input.txt.
//Реализовать логическую функцию is_palindrom(str) и записать ответ в файл output.txt. 
// Формат входных данных
//  Строка из заглавных английских букв
//Формат результата
//  YES или NO 
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define SIZE  1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

int is_palindrom(char *str)
{
  int end = strlen(str)-1;
  
  for(int i = 0; i < end - i; i++)
    if(str[i] != str[end - i])
      return 0;

  return 1;
}

int main(void)
{
  FILE *f_in, *f_out;
  char str[SIZE+1];
  int read_ch;
  
  setlocale(LC_ALL, "RUS");
  
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
  if(!fscanf(f_in, "%[A-Z]s", str)){
    printf("Неверное содержимое файла\n");
    fclose(f_in);
    return 2;
  }
  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    fclose(f_in);
    printf("Ошибка доступа к файлу OUTPUT\n");
    return 3;
  }    
  
  fprintf(f_out,"%s", is_palindrom(str) ? "YES" : "NO");

  fclose(f_in);
  fclose(f_out);

  return 0;
}