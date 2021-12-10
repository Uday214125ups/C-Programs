#include <stdio.h>

int main()
{

    int a, b, c, e,d;

    scanf("%d", &a);

    int f[a];

    for (int i = 0; i < a; i++)
    {

        scanf("%d%d%d", &b, &c,&d);

        if (b>c && c>d ) 
        {
            e=c;
        }
        if (b>d && d>c ) 
        {
            e=d;
        }
        if (c>b && b>d ) 
        {
            e=b;
        }
        if (c>d && d>b ) 
        {
            e=d;
        }
        if (d>c && c>b ) 
        {
            e=c;
        }
        if (d>b && b>c ) 
        {
            e=b;
        }
        
        

        
            f[i] = e;
        
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", f[i]);
    }
}