//сумма цифр
#include <stdio.h>

#define END '.'

int is_digit(char c)
{
  return (c >= '0' && c <= '9') ? 1 : 0;
}

int digit_to_num(char c)
{
  return (int)c - '0';
}


int main (void)
{
  char ch;
  int sum = 0;
  
  while ((ch = getchar()) != END) 
    if (is_digit(ch))
      sum += digit_to_num(ch);
  printf("%d\n", sum);
  
  return 0;
}