// В файле input.txt считать символьную строку, не более 10 000 символов. 
// Посчитать количество строчных (маленьких) и прописных (больших) букв в строке. 
// Учитывать только английские буквы. 
// Результат записать в файл output.txt. 
// Формат входных данных
//  Строка состоящая из английских букв, цифр, пробелов и знаков препинания.
//Формат результата
//  Два целых числа. Количество строчных букв и количество заглавных букв.
#include <stdio.h>
#include <locale.h>


#define SIZE  1000
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

void cnt_letters(FILE *f_in, FILE *f_out, int max_size, int *cnt)
{
  int i = 0;
  char ch; 
  cnt[0] = cnt[1] = 0;

  while((ch = fgetc(f_in)) != EOF && ch != '\n' && i < max_size + 1){
    if(ch >= 'a' && ch <= 'z')
      cnt[0]++;
    else if(ch >= 'A' && ch <= 'Z')
      cnt[1]++;
    i++;
  }
  fprintf(f_out,"%d %d\n", cnt[0], cnt[1]);
}
int main(void)
{
  FILE *f_in, *f_out;
  
  int read_ch;
  int cnt[2];
  
  setlocale(LC_ALL, "RUS");
  
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }

  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    fclose(f_in);
    printf("Ошибка доступа к файлу OUTPUT\n");
    return 2;
  }    
  
  cnt_letters(f_in, f_out, SIZE, cnt);

  fclose(f_in);
  fclose(f_out);

  return 0;
}