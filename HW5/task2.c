#include <stdio.h>
int main(void)
{
  int min, max;
  scanf("%d%d", &min, &max);
  for(int i = min; i <= max; i++)
    printf("%d ",i*i);
  
  return 0;
}