//цифры по возрастнаию
#include <stdio.h>

#define BUF_SIZE 1000
void count_digits(int *cnt, char *number)
{
  int i = 0;
  int d;
  
  while(number[i]){
    d = number[i] - '0';
    cnt[d]++;
    i++;
  }
}
void print_digits(int *digits)
{
  for(int i = 0; i < 10; i++)
    if(digits[i] > 0)
      printf("%d %d\n", i, digits[i]);
}

int main(void)
{
  int digits[10] = {0};
  char number[BUF_SIZE];
  
  scanf("%[0-9]", number);
  count_digits(digits, number);
  print_digits(digits);
  
  return 0;
}
