#include<stdio.h>
int fib(int n)
{
  int a = 2, b = 1, c, i;
  if( n == 1)
    return a;
  for (i = 3; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}
 
int main ()
{
  int n;
  scanf("%d",&n);
  printf("%d", fib(n));
  getchar();
  return 0;
}