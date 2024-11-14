//количество цифр
#include <stdio.h>

#define END '.'

int is_digit(char c)
{
  return (c >= '0' && c <= '9') ? 1 : 0;
}

int main (void)
{
  char ch;
  int cnt = 0;
  
  while ((ch = getchar()) != END) 
    if (is_digit(ch))
      cnt++;
  printf("%d\n", cnt);
  
  return 0;
}