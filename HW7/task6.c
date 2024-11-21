// Дана строка заканчивающаяся символом точка '.'
// Напечатать строку наоборот. Реализуйте рекурсивную функцию,
// которая считывает и печатает строку наоборот.
// void reverse_string()
#include <stdio.h>

#define END '.'
void reverse_string(void)
{
  char ch;
  if((ch = getchar()) != END){
    reverse_string();
    putchar(ch);
  }
}

int main(void)
{
  reverse_string();
  return 0;
}
