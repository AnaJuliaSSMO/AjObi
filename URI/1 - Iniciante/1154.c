#include <stdio.h>

int main(void)
{
	double med,id,is = 0,cont = 0;

	while(1)
	{
		scanf("%lf",&id);

		if(id < 0)
		{
			break;
		}

		else
		{
			is += id;
			cont++;
		}
	}

	med = is/cont;

	printf("%.2lf\n",med);

	return 0;
}