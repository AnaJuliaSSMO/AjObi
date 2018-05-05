#include <stdio.h>

int main (void)
{
    int i, divs, n;
    int cont = 0;

    scanf("%d", &n);

    for(i = 0; i<n; i++)    
    {
		scanf("%d", &divs);
    	cont = cont + divs;
    }

    printf("%d", cont - n);
  
	return 0;
}
