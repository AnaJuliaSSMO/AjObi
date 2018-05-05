#include <stdio.h>
int main()
{  
    double sal,imposto;

    scanf("%lf", &sal);

    if(sal <= 2000.0) { printf("Isento\n");}
    
    else if(sal <= 3000.0 )
    {
        imposto = (sal - 2000.0)*0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else if( sal <= 4500.0)
    {
        imposto = (sal - 3000.0)*0.18 + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else 
    {
        imposto = (sal - 4500)*0.28 + (1500*0.18) + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    
    return 0;
}