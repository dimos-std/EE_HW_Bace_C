// Написать логическую рекурсивную функцию и используя ее определить
// является ли введенное натуральное число точной степенью двойки.
// int is2pow(int n)
#include <stdio.h>
int is2pow(int n)
{
  if(n % 2){
    if(n == 1)
      return 1;
    else
      return 0;
  }
  return is2pow(n >> 1);
}
int main(void)
{
  int num;
  scanf("%d", &num);
  if(is2pow(num))
    printf("YES\n");
  else
    printf("NO\n");
  
  return 0;
}
