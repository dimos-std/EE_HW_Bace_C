#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  uint32_t num, tmp, curDigit, isFind = 0;
  int cnt=0;
  
  scanf("%u", &num);

  while(num != 0 && !isFind){
    curDigit = num % 10;
    num /= 10;    
    tmp = num;
    while(tmp !=0 ){
      if(curDigit == (tmp % 10)){
        isFind = 1;
        break;
      }
      tmp /= 10;
    }
    cnt++;
    if (cnt > 10)
      break;
  }
  if(isFind)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
