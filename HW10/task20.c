// Считать предложение из файла input.txt и определить можно ли из английских букв предложения записанного в файле получить одно слово - палиндром. Ответ напечатать на стандартный поток вывода. Требуется реализовать логическую функцию и применить ее.
// is_palindrom(string)
// Формат входных данных
// Строка из маленьких английских букв и пробелов. Не более 1000 символов.
// Формат результата
// YES или NO

#include <stdio.h>
#include <string.h>

#define SIZE  1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"
#define SPACE ' '


int is_palindrom(char *str)
{
  int cnt_ab[26] = {0};
  int cnt_odd = 0;

  for(int i = 0; str[i]; i++)
    if(str[i] >= 'a' && str[i] <= 'z')
      cnt_ab[str[i] - 'a']++;

  for(int i = 0; i < 26; i++)
    if(cnt_ab[i] & 1)
      cnt_odd++;

  if(cnt_odd > 1)
    return 0;
  return 1;
}


int main(void)
{
  FILE *f_in, *f_out;
  char str[SIZE + 1];
  char polindrom[SIZE + 1];
    
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

  printf("%s\n", is_palindrom(str) ? "YES" : "NO");
   
  fclose(f_in);
  fclose(f_out);

  return 0;
}