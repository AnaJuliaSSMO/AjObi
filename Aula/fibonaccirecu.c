#include <stdio.h>
int main (void)
{
	int n;

	scanf("%d", &n);
	printf("fib(%d) = %d",n,fib(n));
	return 0;
}

int fib(int n)
{
	if(n == 1 || n == 2)
	{return 1;}

	return fib(n-1) + fib(n-2);
}