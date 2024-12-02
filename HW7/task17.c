// Функция Аккермана определяется рекурсивно
// для неотрицательных целых чисел m и n следующим образом:
// Реализуйте данную функцию по прототипу
// int akkerman(int m, int n)
#include <stdio.h>
int akkerman(int m, int n)
{
  if (m == 0)
    return (n + 1);
  else if(m > 0 && n == 0)
    return akkerman(m - 1, 1);
  else
    return akkerman(m - 1, akkerman(m, n - 1));
}

int main(void)
{
  int n, m;
  scanf("%d%d", &n, &m);
  printf("%d\n", akkerman(n, m));

  return 0;
}