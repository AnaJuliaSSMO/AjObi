    #include <stdio.h>

    int main(void)
    {
        int x, y, save = 0,n,i,j;
        scanf("%d",&n);

        for(i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &y);

            if(x == y)
            {
                printf("%d\n",save);
            }

            else if(x < y)
            {
                for(j = x + 1; j < y; j++)
                {
                    if(j % 2 == 1|| j % 2 == -1)
                    {
                        save += x;
                    }
                }
                printf("%d\n",save);
            }

            else if( x > y)
            {
                for(j = y + 1; save = 0; j++)
                {
                    if(j % 2 == 1 || j % 2 == -1)
                    {
                        save += j;
                    }
                }
                printf("%d\n",save);
            }
        }

        return 0;
    }