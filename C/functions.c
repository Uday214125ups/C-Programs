#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        fflush(stdin);
        int n, k, i, max;
        scanf("%d %d", &n, &k);
        max = n % 2;
        for (i = 2; i <= k; i++)
        {
            if (n % i > max)
            {
                max = n % i;
            }
        }
        printf("%d\n", max);
    }

    return 0;
}
