//скобки
#include <stdio.h>

#define END '.'

int bracket(char c)
{
  return c == '('? 1 : (c == ')' ? -1 : 0);
}


int main (void)
{
  char ch;
  int balance = 0;
  
  while ((ch = getchar()) != END && balance >= 0)
    balance += bracket(ch);
  if (balance)
    printf("NO\n");
  else
    printf("YES\n");
  

  return 0;
}