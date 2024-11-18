// Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
// cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
// float cosinus(float x)

#include <stdio.h>
#include <math.h>

#define PI 3.141592653
#define ACCURACY 0.001

int factorial(int num)
{
  int res=1;
  for(int i =1; i <= num; i++)
    res *= i;
  return res;
}

float row_cos(float x, int p)
{
  return (pow(-1, p) * pow(x, 2* p) / factorial(2*p));
}

float deg_rad(float x)
{
  return (x * PI / 180.0);
}

float cosinus(float x)
{
  float res = 0, term;
  int i = 0;
  do{
    term = row_cos(x, i);
    res += term;
    i++;
  }while(fabs(term) > ACCURACY);
  return res;
}

int main (void)
{
  float x;
  scanf("%f", &x);
  printf("%.3f", cosinus(deg_rad(x)));
  return 0;
}