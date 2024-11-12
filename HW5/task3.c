#include <stdio.h>
int main(void)
{
  int min, max, sum = 0;
  scanf("%d%d", &min, &max);
  for(int i = min; i <= max; i++)
    sum += i*i;
  printf("%d", sum);
  
  return 0;
}