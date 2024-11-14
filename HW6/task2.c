//степень числа
#include <stdio.h>
#include <inttypes.h>

int power( int n, int p)
{
  int res = 1;
  
  for( int i = p; i > 0; i--){
    res *= n;    
  }
  return res;
}

int main(void)
{
  int num, powNum;
  
  scanf("%d%d", &num, &powNum);
  printf("%d\n",power(num, powNum));
  
  return 0;
  
}