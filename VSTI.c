#include <stdio.h>

int minus(int a, int b) {
  int r;
  r = a - b;
  return r;
}

int division(int a, int b)
{
  return a / b; 
}

int add(int a, int b) 
{
  int r;
  r = a + b;
  return r;
 }

int main()
{
  int a, b;
  printf("Enter two numbers>> ");
  scanf_s("%d %d", &a, &b);
  printf("Result= %d - %d = %d\n", a, b, minus(a,b));
  printf("Result= %d / %d = %d\n", a, b, division(a,b));
  printf("Result= %d + %d = %d\n", a, b, add(a,b));

  return 0;
}
