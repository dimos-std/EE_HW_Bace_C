// Дана последовательность ненулевых целых чисел, завершающаяся числом 0. 
// Ноль в последовательность не входит.
// Определите наибольшее значение числа в этой последовательности.
// Для решения задачи необходимо написать рекурсивную функцию вида:
// int max_find(int max)
#include <stdio.h>
int max_find(int max)
{
  int num;
  scanf("%d", &num);
  if(num){
    max = max < num ? num : max;
    return max_find(max);
  }
  return max;

}
int main(void)
{
  printf("%d\n",max_find(1<<31));
  return 0;
}
