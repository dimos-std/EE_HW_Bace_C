//заглавные в строчные
#include <stdio.h>
#include <inttypes.h>

#define END '.'

int main(void)
{
  char ch;
  while ((ch = getchar()) != END){
    if (ch >= 'A' && ch <= 'Z')
      ch += 'a' -'A';
    putchar(ch);
  }
  
  
  
  return 0;
}
