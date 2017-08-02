#include <stdio.h>

int n, cont = 0;
int cida[500][500];

int main(void)
{
	int i,j;

	scanf("%d", &n);

	for(i = 0; i <n; i++)
	{
		for(j = 0; ; j++)
		{
			scanf("%d", &cida[i][j]);
		}
	}
	
	if (cida[i][j] == cida[i][j])
	{
	 	cont++;
	}
		
	printf("%d",cont);
	return 0; 
}