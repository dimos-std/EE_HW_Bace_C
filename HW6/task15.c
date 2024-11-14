//цифры о возрастанию?
#include <stdio.h>

int grow_up(int num)
{
  int cur_digit, next_digit, is_grow_up;
  cur_digit = num % 10;
  while(num){
    num /= 10;
    next_digit = num % 10;
    if(cur_digit <= next_digit){
      is_grow_up = 0;
      break;
    }
    cur_digit = next_digit;
  }
  if(!num)
    is_grow_up = 1;
  return is_grow_up;
}

int main(void)
{
  int  num;
  
  scanf("%d", &num);
  if(grow_up(num))
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
