// Дано натуральное число n ≥ 1.
// Проверьте, является ли оно простым.
// Программа должна вывести слово YES, если число простое
// или NO в противном случае.
// Необходимо составить рекурсивную функцию и использовать ее.
// int is_prime(int n, int delitel)
#include <stdio.h>
int is_prime(int n, int delitel)
{
  if(n < 2)
    return 0;
  else if(delitel == n)
    return 1;
  else if(n % delitel == 0)
    return 0;
  else
    return is_prime(n, delitel + 1);
  
}

int main(void)
{
  int num;
  scanf("%d", &num);
  if (is_prime(num, 2))
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
