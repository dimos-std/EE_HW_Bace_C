//Фибоначчи
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, fibo = 1, cur = 0, prev = 0;
  scanf("%u", &num);
  
  for(int i = 0; i < num; i++){
    printf("%d ",fibo);
    prev = cur;
    cur = fibo;
    fibo += prev;
    
  }
  

 
  return 0;
}