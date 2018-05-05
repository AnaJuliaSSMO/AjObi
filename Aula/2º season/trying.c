#include <stdio.h>
char neg[][10] = {
"*****","*....","*****","....*",
"*****",".....",".***.","*...*",
"*****","*...*","*...*",".....",
"*...*","*...*","*...*",".*.*.",
"..*..",".....","*****","*....",
"***..","*....","*****",".....",
".....",".....","*...*","*...*",
"*****","*...*","*...*",".....",
"*****","*...*","*****","*.*..",
"*..**",".....","*****","..*..",
"..*..","..*..","*****",".....",
"***..","*..*.","*...*","*..*.",
"***..",".....","*****","*...*",
"*...*","*...*","*****",".....",
"*...*",".*.*.","..*..","..*..",
"..*.."};

char pos[6][200] = {
    "*****..***..*...*.*****...*...*.*****.*****.***...*****.*...*",
    "*.....*...*.*...*.*.......*...*.*...*...*...*..*..*...*..*.*.",
    "*****.*****.*...*.***.....*****.*****...*...*...*.*...*...*..",
    "....*.*...*..*.*..*.......*...*.*.*.....*...*..*..*...*...*..",
    "*****.*...*...*...*****...*...*.*..**.*****.***...*****...*.."
};

int main() {
    int n, i, j, k, l;
    while(scanf("%d", &n) == 1 && n) 
    {
        if(n < 0) 
        { n = -n;
          for(i = 0; i < 61; i++) 
          {
          	for(j = 0; j < n; j++, puts("")) 
          	{
                for(l = 0; neg[i][l]; l++)
                   for(k = 0; k < n; k++)
                       putchar(neg[i][l]);
                }
            }
        } 

        else 
        {
           for(i = 0; i < 5; i++) 
           {
              for(j = 0; j < n; j++, puts("")) 
              {
                for(l = 0; pos[i][l]; l++)
                    for(k = 0; k < n; k++)
                       putchar(pos[i][l]);
                }
            }
        }      puts("\n");
    }
    return 0;
}