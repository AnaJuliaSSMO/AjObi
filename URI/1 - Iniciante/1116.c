#include <stdio.h>

int main(void)
{
    int n,a,x,y;
    double b;

    scanf("%d", &n);

    for(a = 1; a <= n; a++)
    {
        scanf("%d%d", &x, &y);

        if(y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            b = x/(y*1.00);
            
            printf("%.1lf\n", b);
        }
    }
    return 0;
}
