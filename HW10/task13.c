// В файле input.txt записан полный адрес файла (возможно, без расширения). 
// Необходимо изменить его расширение на ".html" и записать результат в файл output.txt.
// Формат входных данных
// Строка состоящая из символов: a-z, A-Z, 0-9, /
// Формат результата
// Исходная строка с измененным расширением.

#include <stdio.h>
#include <string.h>


#define DOT '.'
#define SLASH '/'
#define EXTENTION ".html"
#define SIZE 1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"


void change_ext(char str[])
{
  char *last_dot, *last_slash;
  last_dot = strrchr(str, DOT);
  last_slash = strrchr(str, SLASH);
  if(!last_dot)
    strcat(str, EXTENTION);
  else if(last_slash){
    if(last_dot < last_slash)
      strcat(str, EXTENTION);
    else
      strcpy(last_dot, EXTENTION);
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

  fscanf(f_in, "%s", str);

  change_ext(str);
  fprintf(f_out, "%s", str);
   
  fclose(f_in);
  fclose(f_out);

  return 0;
}