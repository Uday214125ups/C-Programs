#include <stdio.h>
int main()
{

    int a, del, cup, b, c, d, x, y, z, sum1, sum2;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d%d", &del, &cup);

        scanf("%d%d%d", &b, &c, &d);
        scanf("%d%d%d", &x, &y, &z);
        sum1 = b + c + d;
        sum2 = x + y + z;
        if (sum1 > 150 && sum2 > 150)
        {
            if (2 * del < cup)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else if (sum1 < 150 || sum2 < 150)
        {
            if (cup > del)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
}
