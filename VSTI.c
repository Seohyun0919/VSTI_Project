#include <stdio.h>
int minus(int a, int b) {
  int r;
  r = a + b;
  return r;
}

int main()
{
  int a, b;
  printf("Enter two numbers>> ");
  scanf_s("%d %d", &a, &b);

  return 0;
}
