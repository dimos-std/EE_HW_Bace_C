// Дана строка из английских символов, пробелов и знаков препинания.
// В конце строки символ точка.
// Необходимо реализовать рекурсивную функцию,которая считывает данную строку
// со стандартного потока ввода и возвращает целое число
//  - количество символов 'a' в данной строке.
// int acounter(void)
// Используя данную функцию решить задачу.
#include <stdio.h>
#define END '.'
#define TARGET 'a'
int acounter(void)
{
  int cnt = 0;
  char ch;
  if((ch = getchar()) != END){
    if (ch == TARGET)
      cnt++;
    return cnt + acounter();
  }
  return 0;
}
  


int main (void)
{
  printf("%d\n", acounter());
  return 0;
}