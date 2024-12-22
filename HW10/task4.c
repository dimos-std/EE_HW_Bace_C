// Считать из input.txt два слова не более 100 символов каждое, разделенные одним пробелом.
// Найдите только те символы слов, которые встречаются в обоих словах только один раз. Напечатайте их через пробел в файл output.txt в лексикографическом порядке. 
// Формат входных данных
//  Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов.
//Формат результата
//  Маленькие английские буквы через пробел. 
#include <stdio.h>
#include <string.h>

#define SIZE  100
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"


void occur_once(FILE *f_in, FILE *f_out)
{
  char str[2][SIZE + 1] = {0};
  int cnt_ab[2][26] = {0};
  
  if(fscanf(f_in, "%s %s", str[0], str[1]) == 2){
    for(int i = 0; str[0][i] != '\0'; i++)
      cnt_ab[0][str[0][i] - 'a']++;
    for(int i = 0; str[1][i] != '\0'; i++)
      cnt_ab[1][str[1][i] - 'a']++;
    for(int i = 0; i < 26; i++)
      if(cnt_ab[0][i] == 1 && cnt_ab[1][i] == 1)
       fprintf(f_out, "%c ", 'a' + i);
  }         
}


int main(void)
{
  FILE *f_in, *f_out;
  char str[2][SIZE + 1];
  int read_ch;
  
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    fclose(f_in);  
    printf("Ошибка доступа к файлу: %s\n", F_OUTPUT);
    return 2;
  }
  
  occur_once(f_in, f_out);
    
  fclose(f_in);
  fclose(f_out);

  return 0;
}