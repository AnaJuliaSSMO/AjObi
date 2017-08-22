#include <stdio.h>

int main(void)
{

	char resp1[20];
	char resp2[20];
	char resp3[20];

	scanf("%s%s%s", resp1,resp2,resp3);


	if(resp1[0] == 'v' )
	{
		if(resp2[0] == 'a' && resp3[0] == 'c')
		{
			printf("aguia\n");
		}

		else if(resp2[0] == 'a' && resp3[0] == 'o')
		{
			printf("pomba\n");
		}

		else if(resp2[0] == 'm' && resp3[0] == 'o')
		{
			printf("homem\n");
		}

		else if(resp2[0] == 'm' && resp3[0] == 'h')
		{
			printf("vaca\n");
		}
	}

	else
	{
		if(resp2[0] == 'i' && resp3[2] == 'm')
		{
			printf("pulga\n");
		}

		else if(resp2[0] == 'i' && resp3[2] == 'r')
		{
			printf("lagarta\n");
		}

		else if(resp2[0] == 'a' && resp3[0] == 'h')
		{
			printf("sanguessuga\n");
		}

		else if(resp2[0] == 'a' && resp3[0] == 'o')
		{
			printf("minhoca\n");
		}
	}
	 
	return 0;
}