// Составить рекурсивную функцию, печать всех чисел от N до 1
#include <stdio.h>
void recur_print_rev(int num)
{
  printf("%d ",num);
  if (num > 1)
    recur_print_rev(num-1);
    
}

int main(void)
{
  int num;
  scanf("%d", &num);
  recur_print_rev(num);  
  return 0;
}