1º
#include <stdio.h>

int main(void)
{
	return 0;
}


2º
double var2;
scanf("%lf", &var);


3º
int var3;
scanf("%d", &var2);


4º
char var4;
scanf("%c", var3);


5º
char var5[1001];


6º
#define MAX 1000
int var6[MAX];


7º
double var7;
prinft("%.3lf\n", var7);


8º
char var8[50];
scanf("%s", var8);


9º
char var9[1000];
scanf("%[^\n] %*c", var9);


10º
int i,n,var10[1000];
scanf("%d", n);

for(i = 0; i < n;i++)
{
	scanf("%d", var10[i]);
}


11º
#define MAXM 1000 
#define MAXN 100

int i,j,m,n,var11[MAXM][MAXN];
scanf("%d%d", &m, &n);

for(i = 0; i < m;i++)
{
	for(j = 0; j < n;j++)
	{
		scanf("%d", var11[i][j]);
	}
}




