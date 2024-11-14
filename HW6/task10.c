// простые множители
#include <stdio.h>

void print_simple(int n)
{
  int div;

  div = 2;
  while(n !=1){
    if(n % div == 0){
      n /= div;
      printf("%d ", div);
    }
    else
      div++;
  }
}

int main(void)
{
  int num;
  
  scanf("%d", &num);
  print_simple(num);
  
  return 0;
}