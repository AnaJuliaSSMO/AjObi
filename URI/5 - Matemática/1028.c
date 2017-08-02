#include <stdio.h>

int main(void)
{
	int i,n,f1,f2,aux;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%d%d", &f1, &f2);

		if(f1 > f2)
		{
			while(f2 != 0)
			{
				aux = f1%f2;
				f1 = f2;
				f2 = aux;
			}

        	printf("%d\n", f1);
		}

		else
		{
			while(f1 != 0)
			{
				aux = f2%f1;
				f2 = f1;
				f1 = aux;
			}

	        printf("%d\n", f2);
		}
	}
	return 0;
}