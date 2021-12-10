#include <stdio.h>

int main()
{
    int a, counte = 0, counto = 0;
    scanf("%d", &a);
    int d[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &d[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (d[i] % 2 == 0)
            counte++;
        else
            counto++;
    }

    if (counte > counto)
        printf("READY FOR BATTLE");
    else
        printf("NOT READY");
}