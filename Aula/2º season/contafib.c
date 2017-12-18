#include <stdio.h>

int fib(int n, int a)
{
	a++;
	if(n == 1 || n == 2)
	{return 1;}

	return fib(n-1,a) + fib(n-2,a);
}

int main (void)
{
	int n,a = 0;

	scanf("%d", &n);
	printf("fib(%d) = %d\n",n,fib(n,a));
	printf("Entrou %d vezes na funcao",fib(a,n)); // ele dá erro quando chega aqui
	return 0;
}
