#include <stdio.h>
int main()
{
    int n,m,i,j=0;
    while(1)
    {
        scanf("%d%d", &n, &m);

        if(n<=0 || m<=0) {break;}

        else
        {
            j = 0;

            if(n < m)
            {
                for(i = n; i <= m; i++)
                {
                    printf("%d ",i);
                    j += i;
                }
                printf("Sum=%d\n",j);
            }
            else if(n > m)
            {
                for(i = m; i <= n; i++)
                {
                    printf("%d ",i);
                    j += i;
                }
                printf("Sum=%d\n",j);
            }
        }
    }
    return 0;
}