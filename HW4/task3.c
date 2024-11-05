#include <stdio.h>
#include <locale.h>

int main(void)
{
  unsigned int a, b, c, num, max;


  scanf("%u", &num);

    a = num%10;
    b = (num/10)%10;
    c = (num/100)%10;
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("%u\n", max);

  return 0;
}