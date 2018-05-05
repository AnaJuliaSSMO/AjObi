#include <stdio.h>

int main(void)
{
	int i,j,l,c,C = 0,L = 0, posl = 0, posc = 0, moveu;

	char mapa[101][101];

	scanf("%d%d", &l,&c);

	for(i = 0; i < l; i++)
	{
		scanf("%*c");

		for(j = 0; j < c; j++)
		{
			scanf("%c", &mapa[i][j]);

			if(mapa[i][j] == 'o')
			{
				i = L;
				j = C;
			}	
		}
	}

	do
	{
		moveu = 0;
		mapa[L][C] = '.';

		if (!moveu && L>1 && mapa[L+1][C] == 'H'){ posl++; moveu = 1; }

		else if (!moveu && L<1 && mapa[L-1][C] == 'H'){ posl--; moveu = 1; }

		else if (!moveu && C>1 && mapa[L][C+1] == 'H'){ posc++; moveu = 1; }

		else if (!moveu && C<1 && mapa[L][C-1] == 'H'){ posc--; moveu = 1; }
	}

	while(moveu == 1);

	printf("%d %d\n",posl,posc);
		
	return 0;
}