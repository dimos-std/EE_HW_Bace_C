// Дана монотонная последовательность, в которой каждое натуральное число k
// встречается ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,… 
// Выведите первые n членов этой последовательности.
// Только один цикл for.

#include <stdio.h>
void print_sequence(int k, int cnt)
{
  int printed;

  printed = cnt * (cnt- 1) / 2;
  if (k >= cnt){
    for (int i = 0; i < cnt && (printed + i) < k; i++)
      printf("%d ", cnt);
    print_sequence(k, ++cnt);
  }
}
int main(void)
{
  int num;
  scanf("%d", &num);
  print_sequence(num, 1);
  return 0;
}