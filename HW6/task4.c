// функция
#include <stdio.h>
#include <inttypes.h>

#define SEPARATOR ' '
#define END '0'

int f(int x)
{
  int ret;
  if (x < -2)  
    ret = 4;
  else if (x >= 2)
    ret = x * (x + 4) + 5;
  else
    ret = x * x;
  return ret;
}

int main(void)
{
  int num = 0 , max = 0, end = 0, negative =0;
  
  char ch = SEPARATOR, prevCh;  
  do{
    prevCh = ch;
    ch = getchar();
    if(ch >= '0' && ch <= '9'){
      if(prevCh == SEPARATOR){
        if (ch == END)
          end = 1;
        else{
          num += ch - '0';
          prevCh = ch;          
        }
      }
      else {
        num *= 10;
        num += ch - '0';
        prevCh = ch;
      }
    }
    else if( ch == SEPARATOR) {
      if(negative)
        num = (~num) + 1;
      
      if (max < f(num))
        max = f(num);
      
      num = 0;
      negative = 0;
    }
    else if(ch == '-'){
      negative = 1;
      ch == SEPARATOR;
            
    }

  }while(!end);
  
  printf("%d\n", max);  

  
  return 0;
}