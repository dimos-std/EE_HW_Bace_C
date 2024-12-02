// Составить рекурсивную функцию,
// Выведите все числа от A до B включительно,
// в порядке возрастания, если A < B,
// или в порядке убывания в противном случае.
#include <stdio.h>

void print_forw_or_rev(int a, int b)
{
  if (a < b){
      print_forw_or_rev(a, b-1);
    printf("%d ", b);
  }
  else{
    printf("%d ",a);
    if (a > b)
      print_forw_or_rev(a-1, b);
  }
}

int main(void)
{
  int a, b;
  scanf("%d%d", &a, &b);
  print_forw_or_rev(a, b);
  return 0;
}