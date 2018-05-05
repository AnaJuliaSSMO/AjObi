#include <stdio.h>
int main()
{	
	int n,m = 0,i;

	scanf("%d",&n);

	for (i = 2; i <= n; i = i+2)
	{
		m = i*i;
		
		printf("%d^2 = %d\n",i,m);
		
		m = 0;
	}

	return 0;
}
