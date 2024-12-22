//В файле input.txt необходимо удалить все лишние пробелы (в начале предложения и сдвоенные пробелы). 
//Для решения задачи разработать функцию. Результат записать в output.txt.
//Формат входных данных
//Строка из английских букв, знаков препинания и пробелов. Не более 1000 символов.
//Формат результата
//Строка из английских букв, знаков препинания и пробелов. 
#include <stdio.h>
#include <string.h>

#define SIZE  1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"
#define SPACE ' '


void remove_extra_space(char *str)
{
  int head = 0;
  int cur = 0;
  while(str[cur] == SPACE && str[cur])  
    cur++;
  while(str[cur]){
    if(str[cur] != SPACE){
      str[head] = str[cur];
      head++;
      cur++;
    }else{
      if(str[head - 1] != SPACE){
        str[head] = str[cur];
        head++;
      }
      cur++;
    }
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
  remove_extra_space(str);
  fprintf(f_out, "%s", str);
   
  fclose(f_in);
  fclose(f_out);

  return 0;
}