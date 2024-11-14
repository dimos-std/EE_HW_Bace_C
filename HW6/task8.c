//строчная в заглавную
#include <stdio.h>

#define END '.'

char upperCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
      ch -= 'a' -'A';
    return ch;
}

int main (void)
{
  char ch;
  while ((ch = getchar()) != END)    
    putchar(upperCase(ch));
  
  return 0;
}