// Q1. Write a C program to print pascal triangle.

#include <stdio.h>
int main()
{
  int i, j;
  int n = 5;

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= (n - i); j++)
    {
      printf(" ");
    }
    int k = 1;
    for (j = 1; j <= i; j++)
    {
      printf("%2d", k);
      k = k * (i - j) / j;
    }
    printf("\n");
  }
  return 0;
}
