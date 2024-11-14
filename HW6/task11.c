//функция НОД
#include <stdio.h>

int nod (int a, int b)
{
  int tmp;
  while(b){
    tmp = a % b;
    a = b;
    b = tmp;
  }
  return a;
}

int main(void)
{
  int num1, num2;
  scanf("%d%d", &num1, &num2);
  printf("%d\n",nod(num1, num2));
 
  return 0;
}