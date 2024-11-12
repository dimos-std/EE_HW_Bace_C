//количество четны
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
      if (!((prevCh-'0') & 1))
        cnt++;

  }while(prevCh != ' ' || ch != '0');
  printf("%u", cnt);

  return 0;
}
