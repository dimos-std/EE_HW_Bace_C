// В файле input.txt символьная строка не более 1000 символов. Заменить все буквы "а" "А"  на буквы "b" "B"и наоборот. Результат записать в output.txt. 
// Формат входных данных
//  Строка из маленьких и больших английских букв, знаков препинания и пробелов.
//Формат результата
//  Строка из маленьких и больших английских букв, знаков препинания и пробелов. 
#include <stdio.h>
#include <locale.h>

#define SIZE  101
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

void replace_ab(FILE *f_in, FILE *f_out, int size)
{
  int i = 0;
  char ch;  
  
  while((ch = fgetc(f_in)) != EOF && ch != '\n' && i < size){
    if(ch == 'a' || ch == 'A')
      ch++;
    else if(ch == 'b' || ch == 'B')
      ch--;
    fputc(ch, f_out);
    i++;
  }
}

int main(void)
{
  FILE *f_in, *f_out;
  char str[SIZE];
  int read_ch;
  
  setlocale(LC_ALL, "RUS");
  
  if((f_in = fopen(F_INPUT, "r")) == NULL){
    printf("Ошибка доступа к файлу: %s\n", F_INPUT);
    return 1;
  }
  
  if((f_out = fopen(F_OUTPUT, "w")) == NULL){
    printf("Ошибка доступа к файлу OUTPUT\n");
    return 2;
  }    

  replace_ab(f_in, f_out, SIZE);    

  fclose(f_in);
  fclose(f_out);

  return 0;
}