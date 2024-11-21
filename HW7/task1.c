//Составить рекурсивную функцию, печать всех чисел от 1 до N
#include <stdio.h>
void recur_print(int num)
{
  if (num > 1)
    recur_print(num-1);
    printf("%d ",num);
}

int main(void)
{
  int num;
  scanf("%d", &num);
  recur_print(num);  
  return 0;
}