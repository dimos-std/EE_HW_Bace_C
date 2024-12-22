// Считать число N из файла input.txt. сформировать и вывести в файл output.txt строку из N символов.
// N четное число, не более 26.
// На четных позициях - четные цифры в порядке возрастания, кроме 0, 
// на нечетных позициях - заглавные буквы в порядке следования в английском алфавите.
// Формат входных данных
// Четное N ≤ 26
// Формат результата
// Строка из английских букв и цифр
#include <stdio.h>
#include <locale.h>

#define SIZE 52
#define F_INPUT "input.txt\0"
#define F_OUTPUT "output.txt\0"

int main(void)
{
  FILE *f;
  int i, num;
  char str[SIZE + 1];
  
  setlocale(LC_ALL, "ALL");

  if((f = fopen(F_INPUT, "r")) == NULL){
    perror(F_INPUT);
    return 1;
  }
  if(!fscanf(f, "%d", &num)){
    printf("Неверное содержимое файла\n");
    fclose(f);;
    return 2;
  }
  if(num > 26 || num < 2 || num & 1){
    printf("Число \"%d\" не отвечает требованиям\n", num);
    fclose(f);
    return 3;
  }
  fclose(f);
  if((f = fopen(F_OUTPUT, "w")) == NULL){
    perror("Ошибка доступа к файлу OUTPUT\n");
    return 4;
  }  
  
  for(i = 0; i < num; i++)
    if(i & 1)
      str[i] = '1' + (i & 7);
    else
      str[i] = 'A' + (i >> 1);
  str[i] = '\0'; 
    
  fprintf(f, "%s", str);
  fclose(f);

  return 0;
}