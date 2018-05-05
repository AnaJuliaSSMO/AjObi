#include <stdio.h>

int main (void)
{
	int i, c, conta = 0;

	scanf("%d%*c", &c);

	char map;

	for(i = 0; i < c; i++)
	{
		scanf("%c", &map);
	
		if (map == 'A')
		{
			conta = conta + 1;
		}

		else if (map == 'C')
		{
			conta = conta + 2;
		}

		else if (map == 'P')
		{
			conta = conta + 2;
		}
	}	


		printf("%d", conta);

	return 0;
}