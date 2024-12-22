// Разработать функцию дана строка из маленьких английских букв. 
// Составить из символов палиндром максимальной длинны. 
// При составлении палиндрома буквы в палиндроме должны быть расположены в лексикографическом порядке. Записать ответ в файл output.txt.
// Формат входных данных
// Строка из маленьких английских букв. Не более 1000 символов.
// Формат результата
// Строка из маленьких английских букв.
#include <stdio.h>
#include <string.h>

#define SIZE  1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"
#define SPACE ' '


void get_polindrom(char *str, char *pol)
{
  int cnt_ab[26] = {0};
  int cnt_odd = 0;
  int middle_polindrom = 0;
  int i_pol = 0;
// count symbols
  for(int i = 0; str[i]; i++)
    if(str[i] >= 'a' && str[i] <= 'z')
      cnt_ab[str[i] - 'a']++;
// check polindrom
  for(int i = 0; i < 26; i++){
    if(cnt_ab[i] & 1){
      middle_polindrom = i;
      cnt_odd++;
      break;
    }
  }
  // if(cnt_odd > 1){
  //   *pol = '\0';
  //   return;
  // }
  // left side
  for(int i = 0; i < 26; i++)
    if(cnt_ab[i])
      for(int j = 0; j < (cnt_ab[i] >> 1); j++)
        *(pol++) = 'a' + i;

  if(cnt_odd)
    *(pol++) = 'a' + middle_polindrom;
  // rigth side
  for(int i = 25; i >= 0; i--)
    if(cnt_ab[i])
      for(int j = 0; j < (cnt_ab[i] >> 1); j++)
        *(pol++) = 'a' + i;
  *pol = '\0';
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
  get_polindrom(str, polindrom);
  fprintf(f_out, "%s", polindrom);
   
  fclose(f_in);
  fclose(f_out);

  return 0;
}