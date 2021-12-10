#include <stdio.h>

int main()
{
    int a, b, c, d, e, f,g;
    int first[] = {};
    int sec[] = {};
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d%d", &b, &c);

        for (int j = 1; j <= b; j++)
        {
            e = 0;
            if (b % j == 0)
            {
                first[e] = j;
                e++;
            }
        }
        for (int j = 0; j < c; j++)
        {
            f = 0;
            if (c % j == 0)
            {
                sec[f] = j;
                f++;
            }
        }
    }
    if (e>f) g=e; else g=f;
    for (int j = 0; j < g; j++)
        {
            for (int i = 0;i<g;i++)
            {if (first[j] == sec[i] && first[j]!=1) printf("%d  is LCM",sec[i]);
            else printf("1 is the LCM");}
        }

    for (int j=g;j>0;j--)
    {
        for (int i = g;i>0;i--)
        {  if (first[j] == sec[i]) printf("%d  is GCD",sec[i]);
            }
    }
}