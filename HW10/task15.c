// В файле input.txt дано предложение. Необходимо заменить все имена «Cao» на «Ling» и 
// записать результат в файл output.txt.
// Формат входных данных
// Строка из английский букв, знаков препинания и пробелов. Не более 1000 символов.
// Формат результата
// Строка из английский букв, знаков препинания и пробелов.
//TODO: разобраться с получением данных из файла, чего и сколько дописывает

#include <stdio.h>
#include <locale.h>
#include <string.h>


#define STR_SIZE  1000

#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

void replace_word(char *old, char *new, char *src, char *dst)
{
  int size_cpy;
  char *ptr;
  int size_old = strlen(old);
  int size_new = strlen(new);
 
  while(ptr = strstr(src, old)){
    size_cpy = ptr - src;
    strncpy(dst, src, size_cpy);
    dst += size_cpy;
    strncpy(dst, new, size_new);
    dst += size_new;
    src = ptr + size_old;
  }
  strcpy(dst, src);
}


int main(void)
{
  FILE *f_in, *f_out;
  char str_src[STR_SIZE + 1];
  char str_dst[(STR_SIZE - 3) / 4 *5 + 4 + 1];


 
  setlocale(LC_ALL, "RUS");
  
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }

  if(!(fgets(str_src, STR_SIZE + 1, f_in))){
    printf("Файл %s пуст\n", F_INPUT);
    fclose(f_in);
    return 2;
  }
  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    fclose(f_in);
    printf("Ошибка доступа к файлу: %s\n", F_OUTPUT);
    return 3;
  }
  replace_word("Cao", "Ling", str_src, str_dst);
   fprintf(f_out,"%s", str_dst);


  fclose(f_in);  
  fclose(f_out);

  return 0;
}
