// Алгоритм Soundex
// Во входном файле input.txt находится одно непустое слово, записанное строчными латинскими буквами. Длина слова не превосходит 20 символов.
// Формат результата
// Напечатайте четырёхбуквенный код, соответствующий слову в файл output.txt.

#include <stdio.h>


#define SIZE  20
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

const char tab_soundex[27] = "01230120022455012623010202";

void encode_soundex(char src[], char dst[])
{

  int i = 0;
  int j = 0;
  if(*src){
    while(src[++i])
      src[i] = tab_soundex[src[i] - 'a'];
    
    i = 0;
    dst[j++] = src[i++]; 
    
    while(src[i] && j < 4)
      if(dst[j - 1] == src[i] || src[i] == '0')
        i++;
      else
        dst[j++] = src[i++];

    for(; j < 4; j++)
      dst[j] = '0';
    dst[j] = '\0';
  }
}

int main(void)
{
  FILE *f_in, *f_out;
  char str[SIZE + 1];
  char encoded_str[4];
     
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
  encode_soundex(str, encoded_str);
  fprintf(f_out, "%s\n", encoded_str);
   
  fclose(f_in);
  fclose(f_out);

  return 0;
}