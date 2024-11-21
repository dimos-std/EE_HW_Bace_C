// Составить рекурсивную функцию, печать всех простых множителей числа.
#include <stdio.h>

void recur_print_simple(int num, int div)
{

  if (num > 1){
    if(num % div == 0){
      printf("%d ", div);
      recur_print_simple(num /= div, div);
    }
    else{
      div++;
      recur_print_simple(num, div);
    }
  }
}

int main(void)
{
  int num;
  
  scanf("%d", &num);
  recur_print_simple(num, 2);
  
  return 0;
}