#include <stdio.h>
void reflexo_sem_nexo(int n)
{
	if(n == 0)
	{
	 	printf("%d ",n);
	 	return;
	}

	printf("%d ",n);
	reflexo_sem_nexo(n-1);
	printf("%d ",n);
}

int main (void)
{
	int n;
	scanf("%d",&n);

	reflexo_sem_nexo(n);
	return 0;
}
