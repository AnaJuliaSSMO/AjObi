#include <stdio.h>
int main()
{
    int i,j,n = 7,m;

    for(i = 1; i <= 9; i = i + 2)
    {
        for(m = 1, j = n; m <= 3; j--, m++)
        {
        	printf("I=%d J=%d\n", i, j);
        }

        n = n+2;
    }

    return 0;
}