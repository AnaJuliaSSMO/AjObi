#include <stdio.h>

int main(void)
{
    double a,b = 0,c;
    int i,x = 0;

    for(i = 0; i < 6;i++)
    {
        scanf("%lf", &a);
        
        if(a >= 0)
        {
            x++;
            b += a;
        }
    }

    c = b/x;

    printf ("%d valores positivos\n",x);
    printf("%.1lf\n", c);
    
    return 0;
}