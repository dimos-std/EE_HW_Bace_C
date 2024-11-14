//системы счсления
#include <stdio.h>
int convert(int n, int p)
{
  int tmp = 0, res = 0, pow = 0;

  while(n){
    tmp *= 10;
    tmp += n%p;
    n /= p;
    pow++;
  }
  while(pow){
    res *=10;
    res += tmp%10;
    pow--;
    tmp /= 10;
  }  
  return res;
}

int main (void)
{
  int n, p;

  scanf("%d%d", &n, &p);
  printf("%d\n", convert(n, p));

  return 0;
}
