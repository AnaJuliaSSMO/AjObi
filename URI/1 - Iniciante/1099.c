#include <stdio.h>
int main()
{
	int n,x,y,i,j,soma = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d%d",&x,&y);
        
        if(x == y)
        {
            soma = 0;
            printf("%d\n",soma);
        }

        else if(x < y)
        {
            for(j = x + 1,soma = 0; j < y; j++)
            {
                if(j %2 == 1||j %2 ==-1)
                {
                 	soma+=j;
                }
            }

            printf("%d\n",soma);
        }

        else
        {
            for(j = y + 1,soma = 0; j < x; j++)
            {
                if(j %2 == 1||j %2 ==-1)
                {
                    soma += j;
                }
            }
            printf("%d\n",soma);
        }
    }

	return 0;
}