#include <stdio.h>
int main (void)
{
	int i,n,n1 = 1, n2 = 1,fib;
	scanf("%d", &n);

	if (n <= 2) {fib = 1;}

	for(i = 3; i <= n;i++)
	{
		fib = n1 + n2;
		n1 = n2;
		n2 = fib;
	}

	printf("fib(%d) = %d",n,fib);
	return 0;
}