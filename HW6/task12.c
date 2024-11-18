// Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
// sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
// float sinus(float x)

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
  return (pow(-1, p) * pow(x, 1+2* p) / factorial(1+2*p));
}

float deg_rad(float x)
{
  return (x * PI / 180.0);
}

float sinus(float x)
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
  printf("%.3f", sinus(deg_rad(x)));
  return 0;
}