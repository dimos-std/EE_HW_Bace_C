//количество чисел
#include <stdio.h>
#include <inttypes.h>

#define END '.'

int main(void)
{
  uint32_t cnt = 0;
  char ch = ' ', prevCh;

  do{
    prevCh = ch;
    ch = getchar();
    if(ch == ' ')
      cnt++;

  }while(prevCh != ' ' || ch != '0');
  printf("%u", cnt);

  return 0;
}
