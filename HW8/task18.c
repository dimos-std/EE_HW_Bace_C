// В диапазоне натуральных чисел от 2 до N определить,
//  сколько из них кратны любому из чисел в диапазоне от 2 до 9.
// Формат входных данных
//   Одно целое число N большее 2 и не превосходящее 10000
// Формат результата
//   Все числа от 2 до 9 в формате: 2 количество чисел кратных 2 
//   3 количество чисел кратных 3 4 количество чисел кратных 4 
//   5 количество чисел кратных 5 6 количество чисел кратных 6 
//   7 количество чисел кратных 7 8 количество чисел кратных 8 
//   9 количество чисел кратных 9

#include <stdio.h>

void num_of_mul(int num)
{
  for(int i = 2; i < 10; i++)
    printf("%d %d\n", i, num/i);
  
}

int main (void)
{
  int num;
  scanf("%d", &num);
  num_of_mul(num);

  return 0;
}