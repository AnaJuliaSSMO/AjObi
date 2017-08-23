#include <stdio.h>

int main(void)
{
	int n,i,pos = 0,save = 0;

	for(i = 1; i <= 100; i++)
	{
		scanf("%d",&n);
		
		if(n > save)
		{
			save = n;
			pos = i;
		}
	}

	printf("%d\n%d\n", save,pos);
	return 0;
}