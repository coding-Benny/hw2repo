#include <stdio.h>

int fib(int n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
}

int sum(int n)
{
  if (n == 0) return 0;
  return (n % 10 + sum(n/10));
}

int main()
{
  printf("Hello world!\n");
  printf("%d\n", fib(5));
  printf("%d\n", sum(5));
  return 0;
}
