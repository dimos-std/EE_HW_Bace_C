
#include <stdio.h>

int main(void)
{
  unsigned int a;

  scanf("%d", &a);
  
  if(a > 2  && a <6 )
    printf("spring\n");
  else if (a > 5 && a < 9)
    printf("summer\n");
  else if (a >8 && a < 12)
    printf("autumn\n");
  else if (a < 3 || a == 12)
    printf("winter\n");
  
  return 0;
}
