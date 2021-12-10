#include <stdio.h>

int main()
{

    int a, b, c, e;

    scanf("%d", &a);

    int d[a];

    for (int i = 0; i < a; i++)
    {

        scanf("%d%d", &b, &c);

        e = b % c;
        
            d[i] = e;
        
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", d[i]);
    }
}