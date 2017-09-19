#include <stdio.h> 

int main(void)
{
	double va1,va2,va3,media = 0;
	int i,n;

	scanf("%d",&n);

	for(i = 0; i < n; i++)
	{
		scanf("%lf %lf %lf",&va1,&va2,&va3);

		media = ((va1*2) + (va2*3) + (va3*5))/10;

		printf("%.1lf\n",media);
	}

	return 0;
}