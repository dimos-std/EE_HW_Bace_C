//НОД Евклида модифицированный
#include <stdio.h>

int main(void)
{
  int num, i=10;
  int sum = 0, mul = 1;
  int digit;
  scanf("%d", &num);

  while(i <= num){
    int tmp = i;
    while(tmp){
      digit = tmp % 10;
      sum += digit;
      mul *= digit;
      tmp /= 10;
    }
    if(sum == mul)
      printf("%d ",i);
    sum = 0;
    mul = 1;

    i++;
  }
 
  return 0;
}