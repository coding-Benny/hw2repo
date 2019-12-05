#include <stdio.h>

int sum(int n)
{
  if (n == 0) return 0;
  return (n % 10 + sum(n/10));
}

int main()
{
  printf("Hello world!\n");
  printf("%d\n", sum(5));
  return 0;
}
